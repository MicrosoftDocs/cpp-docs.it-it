---
title: Puntatori a membri
ms.date: 11/04/2016
helpviewer_keywords:
- declarations, pointers
- class members [C++], pointers to
- pointers, to members
- members [C++], pointers to
- pointers, declarations
ms.assetid: f42ddb79-9721-4e39-95b1-c56b55591f68
ms.openlocfilehash: 75bd29310d64b0309ac48be053aa43cc0084aa2d
ms.sourcegitcommit: 1a8fac06478da8bee1f6d70e25afbad94144af1a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/30/2020
ms.locfileid: "84226088"
---
# <a name="pointers-to-members"></a>Puntatori a membri

Le dichiarazioni dei puntatori ai membri sono casi speciali di dichiarazioni del puntatore.  Vengono dichiarati usando la sequenza seguente:

> *Storage-Class-Specifiers*<sub>opz</sub> *CV-Qualifiers*<sub>opz</sub> *Type-specifier* *MS-Modifier*<sub>opz</sub> *Qualified-Name* **`::*`** *CV-Qualifiers*<sub>opz</sub> *Identifier* *PM-inizializzatore*<sub>opt</sub>**`;`**

1. Identificatore di dichiarazione:

   - Identificatore della classe di archiviazione facoltativo.

   - Identificatori **const** e **volatile** facoltativi.

   - Il tipo di identificatore: il nome di un tipo. Si tratta del tipo del membro a cui puntare, non della classe.

1. Dichiaratore:

   - Modificatore specifico di Microsoft facoltativo. Per ulteriori informazioni, vedere [modificatori specifici di Microsoft](../cpp/microsoft-specific-modifiers.md).

   - Il nome completo della classe che contiene i membri a cui puntare.

   - __`::`__ Operatore.

   - __`*`__ Operatore.

   - Identificatori **const** e **volatile** facoltativi.

   - L'identificatore di denominazione del puntatore a membro.

1. Inizializzatore puntatore a membro facoltativo:

   - **`=`** Operatore.

   - **`&`** Operatore.

   - Nome completo della classe.

   - __`::`__ Operatore.

   - Nome di un membro non statico della classe del tipo appropriato.

Come sempre, più dichiaratori (e tutti gli inizializzatori associati) sono consentiti in una singola dichiarazione. Un puntatore a un membro non può puntare a un membro statico della classe, a un membro di tipo riferimento o **`void`** .

Un puntatore a un membro di una classe differisce da un puntatore normale: dispone di entrambe le informazioni sul tipo per il tipo del membro e per la classe a cui appartiene il membro. Un puntatore normale identifica (con l'indirizzo) un singolo oggetto in memoria. Un puntatore a un membro di una classe identifica tale membro in qualsiasi istanza della classe. Nell'esempio seguente viene dichiarata una classe, `Window`, e alcuni puntatori ai dati dei membri.

```cpp
// pointers_to_members1.cpp
class Window
{
public:
   Window();                               // Default constructor.
   Window( int x1, int y1,                 // Constructor specifying
   int x2, int y2 );                       // Window size.
   bool SetCaption( const char *szTitle ); // Set window caption.
   const char *GetCaption();               // Get window caption.
   char *szWinCaption;                     // Window caption.
};

// Declare a pointer to the data member szWinCaption.
char * Window::* pwCaption = &Window::szWinCaption;
int main()
{
}
```

Nell'esempio precedente, `pwCaption` è un puntatore a qualsiasi membro della classe `Window` di tipo `char*` . Il tipo di `pwCaption` è `char * Window::*`. Il frammento di codice seguente dichiara i puntatori alle funzioni membro `SetCaption` e `GetCaption`.

```cpp
const char * (Window::* pfnwGC)() = &Window::GetCaption;
bool (Window::* pfnwSC)( const char * ) = &Window::SetCaption;
```

I puntatori `pfnwGC` e `pfnwSC` puntano a `GetCaption` e `SetCaption` della classe `Window`, rispettivamente. Il codice copia informazioni nella didascalia della finestra direttamente tramite il puntatore a membro `pwCaption`:

```cpp
Window  wMainWindow;
Window *pwChildWindow = new Window;
char   *szUntitled    = "Untitled -  ";
int     cUntitledLen  = strlen( szUntitled );

strcpy_s( wMainWindow.*pwCaption, cUntitledLen, szUntitled );
(wMainWindow.*pwCaption)[cUntitledLen - 1] = '1';     // same as
// wMainWindow.SzWinCaption [cUntitledLen - 1] = '1';
strcpy_s( pwChildWindow->*pwCaption, cUntitledLen, szUntitled );
(pwChildWindow->*pwCaption)[cUntitledLen - 1] = '2'; // same as
// pwChildWindow->szWinCaption[cUntitledLen - 1] = '2';
```

La differenza tra gli **`.*`** **`->*`** operatori e (gli operatori puntatore a membro) è che l' **`.*`** operatore seleziona i membri in base a un oggetto o un riferimento a un oggetto, mentre l' **`->*`** operatore seleziona i membri tramite un puntatore. Per ulteriori informazioni su questi operatori, vedere [espressioni con gli operatori puntatore a membro](../cpp/pointer-to-member-operators-dot-star-and-star.md).

Il risultato degli operatori puntatore a membro è il tipo del membro. In questo caso, è `char *`.

Il frammento di codice seguente richiama le funzioni membro `GetCaption` e `SetCaption` tramite puntatori a membri:

```cpp
// Allocate a buffer.
enum {
    sizeOfBuffer = 100
};
char szCaptionBase[sizeOfBuffer];

// Copy the main window caption into the buffer
//  and append " [View 1]".
strcpy_s( szCaptionBase, sizeOfBuffer, (wMainWindow.*pfnwGC)() );
strcat_s( szCaptionBase, sizeOfBuffer, " [View 1]" );
// Set the child window's caption.
(pwChildWindow->*pfnwSC)( szCaptionBase );
```

## <a name="restrictions-on-pointers-to-members"></a>Limitazioni sui puntatori ai membri

L'indirizzo di un membro statico non è un puntatore a un membro. Si tratta di un puntatore normale a un'istanza del membro statico. Esiste una sola istanza di un membro statico per tutti gli oggetti di una determinata classe. Ciò significa che è possibile usare gli operatori address-of ( **&** ) e dereference ( <strong>\*</strong> ) ordinari.

## <a name="pointers-to-members-and-virtual-functions"></a>Puntatori a membri e funzioni virtuali

La chiamata di una funzione virtuale tramite una funzione puntatore a membro funziona come se la funzione fosse stata chiamata direttamente. La funzione corretta viene cercata nella tabella v e richiamata.

La chiave per le funzioni virtuali in esecuzione, come sempre, le richiama tramite un puntatore a una classe base. Per ulteriori informazioni sulle funzioni virtuali, vedere [funzioni virtuali](../cpp/virtual-functions.md).

Nel codice seguente viene illustrato come richiamare una funzione virtuale con una funzione puntatore a membro:

```cpp
// virtual_functions.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Print();
};
void (Base::* bfnPrint)() = &Base::Print;
void Base::Print()
{
    cout << "Print function for class Base" << endl;
}

class Derived : public Base
{
public:
    void Print();  // Print is still a virtual function.
};

void Derived::Print()
{
    cout << "Print function for class Derived" << endl;
}

int main()
{
    Base   *bPtr;
    Base    bObject;
    Derived dObject;
    bPtr = &bObject;    // Set pointer to address of bObject.
    (bPtr->*bfnPrint)();
    bPtr = &dObject;    // Set pointer to address of dObject.
    (bPtr->*bfnPrint)();
}

// Output:
// Print function for class Base
// Print function for class Derived
```
