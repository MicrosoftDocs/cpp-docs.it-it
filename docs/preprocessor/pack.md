---
title: Pragma pack
ms.date: 11/11/2019
f1_keywords:
- pack_CPP
- vc-pragma.pack
helpviewer_keywords:
- pragmas, pack
- pack pragma
ms.assetid: e4209cbb-5437-4b53-b3fe-ac264501d404
ms.openlocfilehash: 037c57a10b1de7dd00249ae60acaef0939e355eb
ms.sourcegitcommit: 8a01ae145bc65f5bc90d6e47b4a1bdf47b073ee7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2020
ms.locfileid: "82765734"
---
# <a name="pack-pragma"></a>Pragma pack

Specifica l'allineamento di compressione per la struttura, l'Unione e i membri della classe.

## <a name="syntax"></a>Sintassi

> **#pragma pack (Mostra)**\
> **#pragma pack (push** [ **,** *identificatore* ] [ **,** *n* ] **)**\
> **#pragma pack (pop** [ **,** { *Identifier* | *n* }] **)**\
> **#pragma pack (** [ *n* ] **)**

### <a name="parameters"></a>Parametri

**Visualizza**\
Opzionale Visualizza il valore byte corrente per l'allineamento di compressione. Il valore viene visualizzato da un messaggio di avviso.

**spingere**\
Opzionale Inserisce il valore di allineamento di compressione corrente nello stack interno del compilatore e imposta il valore di allineamento di compressione corrente su *n*. Se *n* non è specificato, viene effettuato il push del valore di allineamento di compressione corrente.

**popup**\
Opzionale Rimuove il record dall'inizio dello stack interno del compilatore. Se *n* non è specificato con **pop**, il valore di compressione associato al record risultante nella parte superiore dello stack è il nuovo valore di allineamento di compressione. Se viene specificato *n* , ad esempio `#pragma pack(pop, 16)`, *n* diventa il nuovo valore di allineamento di compressione. Se si esegue il pop usando un *identificatore*, ad `#pragma pack(pop, r1)`esempio, vengono estratti tutti i record dello stack finché non viene trovato il record con *identificatore* . Il record viene estratto e il valore di compressione associato al record risultante nella parte superiore dello stack è il nuovo valore di allineamento di compressione. Se si esegue il pop usando un *identificatore* non trovato in nessun record nello stack, il **pop** viene ignorato.

L'istruzione `#pragma pack (pop, r1, 2)` è equivalente a `#pragma pack (pop, r1)` seguita da `#pragma pack(2)`.

*identificatore*\
Opzionale Se usato con **push**, assegna un nome al record nello stack interno del compilatore. Quando viene usato con **pop**, estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*n*\
Opzionale Specifica il valore, in byte, da utilizzare per la compressione. Se l'opzione del compilatore [/ZP](../build/reference/zp-struct-member-alignment.md) non è impostata per il modulo, il valore predefinito per *n* è 8. Tra i valori validi sono compresi 1, 2, 4, 8 e 16. L'allineamento di un membro si trova su un limite costituito da un multiplo di *n*o da un multiplo della dimensione del membro, a seconda del valore minore.

## <a name="remarks"></a>Osservazioni

Per *comprimere* una classe è necessario posizionare i membri direttamente dopo l'altro in memoria. Può indicare che alcuni o tutti i membri possono essere allineati su un limite più piccolo dell'allineamento predefinito dell'architettura di destinazione. **Pack** fornisce il controllo a livello di dichiarazione dei dati. Si differenzia dall'opzione del compilatore [/ZP](../build/reference/zp-struct-member-alignment.md), che fornisce solo il controllo a livello di modulo. il **pacchetto** viene applicato alla prima dichiarazione di **struttura**, **Unione**o **classe** dopo che il pragma è stato individuato. il **pacchetto** non ha alcun effetto sulle definizioni. La chiamata a **Pack** senza argomenti imposta *n* sul valore impostato nell'opzione `/Zp`del compilatore. Se l'opzione del compilatore non è impostata, il valore predefinito è 8 per x86, ARM e ARM64. Il valore predefinito è 16 per x64 native.

Se si modifica l'allineamento di una struttura, ciò può non utilizzare molto spazio in memoria, ma è possibile osservare una riduzione delle prestazioni o addirittura ottenere un'eccezione generata dall'hardware per l'accesso non allineato.  È possibile modificare questo comportamento dell'eccezione usando [SetErrorMode](/windows/win32/api/errhandlingapi/nf-errhandlingapi-seterrormode).

Per ulteriori informazioni sulla modifica dell'allineamento, vedere i seguenti articoli:

- [__alignof](../cpp/alignof-operator.md)

- [allineare](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [Esempi di allineamento della struttura](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

   > [!WARNING]
   > In Visual Studio 2015 e versioni successive è possibile usare gli operatori **aligns** e **alignof** standard, che a `__alignof` differenza `declspec( align )` di e sono portabili tra i compilatori. Lo standard C++ non risolve la compressione, quindi è comunque necessario usare **Pack** (o l'estensione corrispondente in altri compilatori) per specificare gli allineamenti inferiori alle dimensioni della parola dell'architettura di destinazione.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene illustrato come utilizzare il pragma **Pack** per modificare l'allineamento di una struttura.

```cpp
// pragma_directives_pack.cpp
#include <stddef.h>
#include <stdio.h>

struct S {
   int i;   // size 4
   short j;   // size 2
   double k;   // size 8
};

#pragma pack(2)
struct T {
   int i;
   short j;
   double k;
};

int main() {
   printf("%zu ", offsetof(S, i));
   printf("%zu ", offsetof(S, j));
   printf("%zu\n", offsetof(S, k));

   printf("%zu ", offsetof(T, i));
   printf("%zu ", offsetof(T, j));
   printf("%zu\n", offsetof(T, k));
}
```

```Output
0 4 8
0 4 6
```

Nell'esempio seguente viene illustrato come utilizzare la sintassi *push*, *pop*e *show* .

```cpp
// pragma_directives_pack_2.cpp
// compile with: /W1 /c
#pragma pack()   // n defaults to 8; equivalent to /Zp8
#pragma pack(show)   // C4810
#pragma pack(4)   // n = 4
#pragma pack(show)   // C4810
#pragma pack(push, r1, 16)   // n = 16, pushed to stack
#pragma pack(show)   // C4810

// pop to the identifier and then set
// the value of the current packing alignment:
#pragma pack(pop, r1, 2)   // n = 2 , stack popped
#pragma pack(show)   // C4810
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
