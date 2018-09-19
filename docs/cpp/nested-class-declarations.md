---
title: Dichiarazioni di classi annidate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], declaring
- declarations, class
- nested classes [C++]
- nested classes [C++], declaring
- declaring classes [C++]
- declarations, nested classes
ms.assetid: c02e471d-b7f9-41b8-8ef6-2323f006dbd5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 870245fa8a13ac4950a7940fcb4738bd1f50ebe1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087734"
---
# <a name="nested-class-declarations"></a>Dichiarazioni di classi annidate

La classe può essere dichiarata all'interno dell'ambito di un'altra classe. Tale classe viene denominata "una classe annidata". Le classi annidate sono considerate all'interno dell'ambito della classe contenitore e possono essere usate all'interno di tale ambito. Per fare riferimento a una classe annidata da un ambito diverso dal relativo ambito contenitore immediato, è necessario usare un nome completo.

Nell'esempio seguente viene illustrato come dichiarare classi annidate:

```cpp
// nested_class_declarations.cpp
class BufferedIO
{
public:
   enum IOError { None, Access, General };

   // Declare nested class BufferedInput.
   class BufferedInput
   {
   public:
      int read();
      int good()
      {
         return _inputerror == None;
      }
   private:
       IOError _inputerror;
   };

   // Declare nested class BufferedOutput.
   class BufferedOutput
   {
      // Member list
   };
};

int main()
{
}
```

`BufferedIO::BufferedInput` e `BufferedIO::BufferedOutput` vengono dichiarate all'interno di `BufferedIO`. Questi nomi di classe non sono visibili al di fuori l'ambito della classe `BufferedIO`. Tuttavia, un oggetto di tipo `BufferedIO` non contiene alcun oggetto dei tipi `BufferedInput` o `BufferedOutput`.

Le classi annidate possono usare direttamente nomi, nomi dei tipi, nomi dei membri statici ed enumeratori solo dalla classe contenitore. Per usare i nomi degli altri membri della classe, è necessario usare puntatori, riferimenti o nomi di oggetto.

Nell'esempio `BufferedIO` precedente, all'enumerazione `IOError` possono accedere direttamente le funzioni membro delle classi annidate, `BufferedIO::BufferedInput` o `BufferedIO::BufferedOutput`, come illustrato nella funzione `good`.

> [!NOTE]
>  Le classi annidate dichiarano solo tipi all'interno dell'ambito della classe. Non comportano la creazione di oggetti contenuti della classe annidata. Nell'esempio precedente vengono dichiarate due classi annidate ma non viene dichiarato alcun oggetto di questi tipi di classe.

Un'eccezione alla visibilità nell'ambito di una dichiarazione di classe annidata è quando il nome di un tipo viene dichiarato con una dichiarazione con prototipo.  In questo caso, il nome della classe dichiarata dalla dichiarazione con prototipo è visibile all'esterno della classe contenitore, con il relativo ambito definito come il più piccolo ambito contenitore di tipo non classe.  Ad esempio:

```cpp
// nested_class_declarations_2.cpp
class C
{
public:
    typedef class U u_t; // class U visible outside class C scope
    typedef class V {} v_t; // class V not visible outside class C
};

int main()
{
    // okay, forward declaration used above so file scope is used
    U* pu;

    // error, type name only exists in class C scope
    u_t* pu2; // C2065

    // error, class defined above so class C scope
    V* pv; // C2065

    // okay, fully qualified name
    C::V* pv2;
}
```

## <a name="access-privilege-in-nested-classes"></a>Privilegi di accesso nelle classi annidate

L'annidamento di una classe all'interno di un'altra classe non fornisce privilegi di accesso speciali alle funzioni membro della classe annidata. Analogamente, le funzioni membro della classe contenitore non hanno accesso speciale ai membri della classe annidata.

## <a name="member-functions-in-nested-classes"></a>Funzioni membro in classi annidate

Le funzioni membro dichiarate nelle classi annidate possono essere definite in ambito file. Nell'esempio precedente potrebbe essere stato scritto:

```cpp
// member_functions_in_nested_classes.cpp
class BufferedIO
{
public:
    enum IOError { None, Access, General };
    class BufferedInput
    {
    public:
        int read(); // Declare but do not define member
        int good(); //  functions read and good.
    private:
        IOError _inputerror;
    };

    class BufferedOutput
    {
        // Member list.
    };
};
// Define member functions read and good in
//  file scope.
int BufferedIO::BufferedInput::read()
{
   return(1);
}

int BufferedIO::BufferedInput::good()
{
    return _inputerror == None;
}
int main()
{
}
```

Nell'esempio precedente, il *qualified-type-name* sintassi viene usata per dichiarare il nome della funzione. La dichiarazione:

```cpp
BufferedIO::BufferedInput::read()
```

indica "la funzione `read` che è un membro della classe `BufferedInput` inclusa nell'ambito della classe `BufferedIO`". Poiché questa dichiarazione Usa la *qualified-type-name* informazioni sulla sintassi, sono possibili i costrutti del form seguente:

```cpp
typedef BufferedIO::BufferedInput BIO_INPUT;

int BIO_INPUT::read()
```

La dichiarazione precedente equivale al precedente, ma usa una **typedef** nome al posto dei nomi di classe.

## <a name="friend-functions-in-nested-classes"></a>Funzioni friend in classi annidate

Le funzioni friend dichiarate in una classe annidata vengono considerate come esistenti nell'ambito della classe annidata, non della classe che le contiene. Pertanto, le funzioni friend non dispongono di privilegi di accesso speciali ai membri o alle funzioni di membro della classe che le contiene. Se si desidera usare un nome dichiarato in una classe annidata in una funzione friend e la funzione friend è definita nell'ambito file, usare nomi di tipo completi come illustrato di seguito:

```cpp
// friend_functions_and_nested_classes.cpp

#include <string.h>

enum
{
    sizeOfMessage = 255
};

char *rgszMessage[sizeOfMessage];

class BufferedIO
{
public:
    class BufferedInput
    {
    public:
        friend int GetExtendedErrorStatus();
        static char *message;
        static int  messageSize;
        int iMsgNo;
   };
};

char *BufferedIO::BufferedInput::message;
int BufferedIO::BufferedInput::messageSize;

int GetExtendedErrorStatus()
{
    int iMsgNo = 1; // assign arbitrary value as message number

    strcpy_s( BufferedIO::BufferedInput::message,
              BufferedIO::BufferedInput::messageSize,
              rgszMessage[iMsgNo] );

    return iMsgNo;
}

int main()
{
}
```

Nel codice riportato di seguito viene illustrata la funzione `GetExtendedErrorStatus` dichiarata come funzione friend. Nella funzione, definita nell'ambito file, un messaggio viene copiato da una matrice statica a un membro della classe. Si noti che, per una migliore implementazione, si deve dichiarare `GetExtendedErrorStatus` come segue:

```cpp
int GetExtendedErrorStatus( char *message )
```

Con l'interfaccia precedente, numerose classi possono usare i servizi di questa funzione, passando una posizione di memoria in cui desiderano che il messaggio di errore sia copiato.

## <a name="see-also"></a>Vedere anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)