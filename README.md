# Samotnik (Peg Solitaire)

Klasyczna jednoosobowa gra logiczna "Samotnik" (znana również jako Peg Solitaire) stworzona w języku **C++** z wykorzystaniem biblioteki **Qt 6**.
Projekt ma całkowicie unikalną i odręczną oprawę graficzną.

Celem gry jest pozostawienie na planszy tylko jednego pionka, najlepiej na samym jej środku, poprzez zbijanie (przeskakiwanie) sąsiadujących pionków w pionie lub poziomie.

## Funkcjonalności

* **Interfejs Graficzny (GUI):** Zbudowany przy użyciu Qt Widgets.
* **Autorski styl wizualny:** Odręcznie rysowane tło, pionki, przyciski oraz napisy, nadające grze niepowtarzalny klimat.
* **System podpowiedzi:** Po kliknięciu w pionka, gra automatycznie podświetla pola, na które można wykonać legalny ruch.
* **Śledzenie postępów:** Wbudowany na żywo licznik wykonanych ruchów (Moves) oraz stoper mierzący czas gry (Time).
* **Walidacja ruchów:** Pełne zabezpieczenie przed wykonaniem niedozwolonego ruchu.

## Technologie

* **Język:** C++ (C++17)
* **Framework:** Qt 6 (Moduły: Core, GUI, Widgets)
* **System budowania:** qmake

## Struktura Projektu

Projekt został zorganizowany zgodnie z dobrymi praktykami:
* `src/` - zawiera cały kod źródłowy C++ (`.cpp`, `.h`) oraz definicje interfejsu (`.ui`).
* `images/` - folder przechowujący odręczne zasoby graficzne.
* `samotnik.pro` - główny plik konfiguracyjny projektu.
* Odpowiednio skonfigurowany plik `.gitignore` zapobiegający śledzeniu plików binarnych i tymczasowych.

## For Windows
To run the game with a graphical interface, you need to go to the 'release_file' folder and run the samotnik.exe file.
