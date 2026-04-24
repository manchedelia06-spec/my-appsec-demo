markdown

# AppSec Pipeline Demo

## О проекте
CI/CD пайплайн с инструментами безопасности для статического анализа (Semgrep), поиска секретов (Gitleaks) и SCA (Trivy).

## Уязвимости, которые находит gfqgkfqy
1. Buffer overflow - в vulnerable.c используется `strcpy` без проверки границ
2. Hardcoded secrets в secrets.txt — API ключи и пароли в `secrets.txt`
3. Устаревшие зависимости в requirements.txt — Flask 2.0.1 имеет известные CVE

