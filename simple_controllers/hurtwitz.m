clc
clear
close all

% Example usage:
coefficients = [1, 16, 70, 100]; % Adjust coefficients as needed
isPolynomialHurwitz(coefficients);

function isHurwitz = isPolynomialHurwitz(coeffs)
    % Check if the polynomial with given coefficients is Hurwitz

    % Get the characteristic equation coefficients
    charCoeffs = fliplr(coeffs); % Reverse the order of coefficients

    % Check if all leading principal minors have the same sign
    isHurwitz = all(checkPrincipalMinors(charCoeffs));

    if isHurwitz
        disp('The polynomial is Hurwitz.');
    else
        disp('The polynomial is not Hurwitz.');
    end
end

function result = checkPrincipalMinors(coefficients)
    % Check if all leading principal minors have the same sign

    result = true;
    n = length(coefficients);

    for k = 1:n
        principalMinor = coefficients(1:k); % Use the entire coefficients vector
        determinant = det(toeplitz(principalMinor));
        result = result && (determinant >= 0);
        
        if ~result
            break; % Break if any determinant is non-positive
        end
    end
end
