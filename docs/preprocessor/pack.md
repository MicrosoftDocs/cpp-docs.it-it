---
title: pack
ms.date: 12/17/2018
f1_keywords:
- pack_CPP
- vc-pragma.pack
helpviewer_keywords:
- pragmas, pack
- pack pragma
ms.assetid: e4209cbb-5437-4b53-b3fe-ac264501d404
ms.openlocfilehash: bf1ae81184d53dd271f63c26e8f9a52a6410b232
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62180030"
---
# <a name="pack"></a>pack
Specifica l'allineamento di compressione per una struttura, un'unione e i membri della classe.

## <a name="syntax"></a>Sintassi

```
#pragma pack( [ show ] | [ push | pop ] [, identifier ] , n  )
```

### <a name="parameters"></a>Parametri

**show**<br/>
(Facoltativo) Consente di visualizzare il valore byte corrente per l'allineamento di compressione. Il valore viene visualizzato da un messaggio di avviso.

**push**<br/>
(Facoltativo) Push l'allineamento di compressione corrente valore nel stack interno del compilatore e imposta l'allineamento di compressione corrente valore su *n*. Se *n* non viene specificato, l'oggetto corrente viene inserito il valore di allineamento di compressione.

**pop**<br/>
(Facoltativo) Rimuove il record dall'inizio dello stack del compilatore interno. Se *n* non viene specificato con **pop**, quindi il valore di compressione associato al record risulta nella parte superiore dello stack è il nuovo valore di allineamento di compressione. Se *n* è specificato, ad esempio `#pragma pack(pop, 16)`, *n* diventa il nuovo valore di allineamento di compressione. Se si estrae con *identifier*, ad esempio `#pragma pack(pop, r1)`, quindi tutti i record dello stack vengono estratti finché il record che ha *identificatore* viene trovato. Tale record viene estratto e il valore di compressione associato al record risultante in cima allo stack è il nuovo valore di allineamento di compressione. Se si estrae con un *identifier* che non viene trovato in alcun record nello stack, il **pop** viene ignorato.

*identifier*<br/>
(Facoltativo) Quando abbinata *push*, assegna un nome al record nello stack del compilatore interno. Quando abbinata **pop**, estrae record dallo stack interno finché *identificatore* viene rimosso; se *identificatore* non viene trovato nello stack interno, nulla viene estratto.

*n*<br/>
(Facoltativo) Specifica il valore, in byte, da utilizzare per la compressione. Se l'opzione del compilatore [/Zp](../build/reference/zp-struct-member-alignment.md) non è impostato per il modulo, il valore predefinito per *n* è 8. Tra i valori validi sono compresi 1, 2, 4, 8 e 16. L'allineamento del membro sarà su un limite ossia un multiplo di *n* o un multiplo delle dimensioni del membro, qualunque sia il minore.

`#pragma pack(pop, identifier, n)` non è definito.

## <a name="remarks"></a>Note

Comprimere una classe vuol dire inserire i suoi membri direttamente in memoria l'uno dopo l'altro. Questo può significare che alcuni o tutti i membri possono essere allineati a un limite inferiore rispetto all'allineamento predefinito dell'architettura di destinazione. **Pack** offre un controllo a livello di dichiarazione di dati. Questo comportamento è diverso dall'opzione del compilatore [/Zp](../build/reference/zp-struct-member-alignment.md), che fornisce solo il controllo a livello di modulo. **Pack** ha effetto in corrispondenza del primo **struct**, **union**, oppure **classe** dichiarazione dopo che viene individuato il pragma. **Pack** non ha alcun effetto sulle definizioni. La chiamata **pack** senza argomenti imposta *n* sul valore impostato nell'opzione del compilatore `/Zp`. Se l'opzione del compilatore non è impostata, il valore predefinito è 8.

Se si modifica l'allineamento di una struttura, ciò può non utilizzare molto spazio in memoria, ma è possibile osservare una riduzione delle prestazioni o addirittura ottenere un'eccezione generata dall'hardware per l'accesso non allineato.  È possibile modificare questo comportamento dell'eccezione mediante [SetErrorMode](https://msdn.microsoft.com/library/windows/desktop/ms680621).

Per ulteriori informazioni sulla modifica dell'allineamento, vedere questi argomenti:

- [__alignof](../cpp/alignof-operator.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [Esempi di allineamento di strutture](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

   > [!WARNING]
   > Si noti che in Visual Studio 2015 e versioni successive è possibile usare gli operatori standard alignas e alignof, che, a differenza di `__alignof` e `declspec( align )`, sono portabili tra compilatori. Lo standard C++ non contempla la compressione, pertanto è necessario usare comunque **pack** (o l'estensione corrispondente in altri compilatori) per specificare allineamenti inferiori alla dimensione parola dell'architettura di destinazione.

## <a name="examples"></a>Esempi

L'esempio seguente viene illustrato come utilizzare il **pack** pragma per modificare l'allineamento di una struttura.

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

L'esempio seguente viene illustrato come utilizzare il *push*, *pop*, e *Mostra* sintassi.

```cpp
// pragma_directives_pack_2.cpp
// compile with: /W1 /c
#pragma pack()   // n defaults to 8; equivalent to /Zp8
#pragma pack(show)   // C4810
#pragma pack(4)   // n = 4
#pragma pack(show)   // C4810
#pragma pack(push, r1, 16)   // n = 16, pushed to stack
#pragma pack(show)   // C4810
#pragma pack(pop, r1, 2)   // n = 2 , stack popped
#pragma pack(show)   // C4810
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)