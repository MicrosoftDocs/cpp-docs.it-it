---
title: Membri statici (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- class members [C++], static
- instance constructors, static members
- class members [C++], shared
- members [C++], static data members
- static members [C++], data members
- static data members [C++]
- data members [C++], static data members
- class instances [C++], shared members
- instance constructors, shared members
- class instances [C++], static members
ms.assetid: 9cc8cf0f-d74c-46f2-8e83-42d4e42c8370
ms.openlocfilehash: c18b29cf69c2f899fbf06c7cb75ebbd2242ab427
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178561"
---
# <a name="static-members-c"></a>Membri statici (C++)

Le classi possono contenere membri dati statici e funzioni membro. Quando un membro dati viene dichiarato come **statico**, viene mantenuta solo una copia dei dati per tutti gli oggetti della classe.

I membri dati statici non fanno parte degli oggetti di un tipo specifico della classe. Di conseguenza, la dichiarazione di un membro dati statico non è considerata una definizione. Il membro dati viene dichiarato nell'ambito della classe, ma la definizione viene fatta nell'ambito del file. Questi membri statici hanno collegamento esterno. L'esempio seguente illustra questi concetti.

```cpp
// static_data_members.cpp
class BufferedOutput
{
public:
   // Return number of bytes written by any object of this class.
   short BytesWritten()
   {
      return bytecount;
   }

   // Reset the counter.
   static void ResetCount()
   {
      bytecount = 0;
   }

   // Static member declaration.
   static long bytecount;
};

// Define bytecount in file scope.
long BufferedOutput::bytecount;

int main()
{
}
```

Nel codice precedente, il membro `bytecount` è dichiarato nella classe `BufferedOutput`, ma deve essere definito all'esterno della dichiarazione della classe.

Ai membri dati statici è possibile accedere senza fare riferimento a un oggetto di tipo classe. Il numero di byte scritti utilizzando oggetti `BufferedOutput` può essere ottenuto come segue:

```cpp
long nBytes = BufferedOutput::bytecount;
```

Affinché il membro statico esista, non è necessario che esistano tutti gli oggetti di tipo classe. È possibile accedere ai membri statici anche usando la selezione dei membri ( **.** e **->** ). Ad esempio:

```cpp
BufferedOutput Console;

long nBytes = Console.bytecount;
```

Nel caso precedente, il riferimento all'oggetto (`Console`) non viene valutato e il valore restituito è quello dell'oggetto statico `bytecount`.

I membri dati statici sono soggetti alle regole di accesso al membro di classe, pertanto l'accesso privato ai membri dati statici è consentito solo per le funzioni friend e membro della classe. Queste regole sono descritte in [controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md). L'eccezione è costituita dal fatto che i membri dati statici devono essere definiti nell'ambito del file indipendentemente dalle restrizioni di accesso. Se il membro dati viene inizializzato in modo esplicito, insieme alla definizione deve essere fornito un inizializzatore.

Il tipo di un membro statico non è qualificato dal nome della classe. Il tipo di `BufferedOutput::bytecount` è pertanto **Long**.

## <a name="see-also"></a>Vedere anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)
