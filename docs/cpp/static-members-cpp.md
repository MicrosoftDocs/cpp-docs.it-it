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
ms.openlocfilehash: b79b65ab3cbf4565f31ad6717f8163c678697c9c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213190"
---
# <a name="static-members-c"></a>Membri statici (C++)

Le classi possono contenere membri dati statici e funzioni membro. Quando un membro dati viene dichiarato come **`static`** , viene mantenuta solo una copia dei dati per tutti gli oggetti della classe.

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

Affinché il membro statico esista, non è necessario che esistano tutti gli oggetti di tipo classe. È possibile accedere ai membri statici anche usando la selezione dei membri (**.** e **->** ). Ad esempio:

```cpp
BufferedOutput Console;

long nBytes = Console.bytecount;
```

Nel caso precedente, il riferimento all'oggetto (`Console`) non viene valutato e il valore restituito è quello dell'oggetto statico `bytecount`.

I membri dati statici sono soggetti alle regole di accesso al membro di classe, pertanto l'accesso privato ai membri dati statici è consentito solo per le funzioni friend e membro della classe. Queste regole sono descritte in [controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md). L'eccezione è costituita dal fatto che i membri dati statici devono essere definiti nell'ambito del file indipendentemente dalle restrizioni di accesso. Se il membro dati viene inizializzato in modo esplicito, insieme alla definizione deve essere fornito un inizializzatore.

Il tipo di un membro statico non è qualificato dal nome della classe. Pertanto, il tipo di `BufferedOutput::bytecount` è **`long`** .

## <a name="see-also"></a>Vedere anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)
