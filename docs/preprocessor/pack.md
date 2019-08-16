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
ms.openlocfilehash: da4484ec86d39c8fa55a741eadd53a1d614b20dc
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510167"
---
# <a name="pack"></a>pack
Specifica l'allineamento di compressione per una struttura, un'unione e i membri della classe.

## <a name="syntax"></a>Sintassi

```
#pragma pack( [ show ] | [ push | pop ] [, identifier ] , n  )
```

### <a name="parameters"></a>Parametri

**show**<br/>
Opzionale Visualizza il valore byte corrente per l'allineamento di compressione. Il valore viene visualizzato da un messaggio di avviso.

**push**<br/>
Opzionale Inserisce il valore di allineamento di compressione corrente nello stack interno del compilatore e imposta il valore di allineamento di compressione corrente su *n*. Se *n* viene omesso, viene effettuato il push del valore di allineamento di compressione corrente.

**pop**<br/>
Opzionale Rimuove il record dall'inizio dello stack interno del compilatore. Se *n* non è specificato con **pop**, il valore di compressione associato al record risultante nella parte superiore dello stack è il nuovo valore di allineamento di compressione. Se viene specificato *n* , ad esempio `#pragma pack(pop, 16)`, *n* diventa il nuovo valore di allineamento di compressione. Se si estrae un *identificatore*, ad esempio `#pragma pack(pop, r1)`, vengono estratti tutti i record dello stack finché non viene trovato il record con *identificatore* . Tale record viene estratto e il valore di compressione associato al record risultante in cima allo stack è il nuovo valore di allineamento di compressione. Se si estrae con un *identificatore* che non è presente in alcun record nello stack, il **pop** viene ignorato.

*identifier*<br/>
Opzionale Se usato con *push*, assegna un nome al record nello stack interno del compilatore. Quando viene usato con **pop**, estrae i record dallo stack interno finché non viene rimosso l' *identificatore* ; Se *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*n*<br/>
Opzionale Specifica il valore, in byte, da utilizzare per la compressione. Se l'opzione del compilatore [/ZP](../build/reference/zp-struct-member-alignment.md) non è impostata per il modulo, il valore predefinito per *n* è 8. Tra i valori validi sono compresi 1, 2, 4, 8 e 16. L'allineamento di un membro sarà su un limite che corrisponde a un multiplo di *n* o a un multiplo della dimensione del membro, a seconda del valore minore.

`#pragma pack(pop, identifier, n)`non è definito.

## <a name="remarks"></a>Note

Comprimere una classe vuol dire inserire i suoi membri direttamente in memoria l'uno dopo l'altro. Questo può significare che alcuni o tutti i membri possono essere allineati a un limite inferiore rispetto all'allineamento predefinito dell'architettura di destinazione. **Pack** fornisce il controllo a livello di dichiarazione dei dati. Questo comportamento è diverso dall'opzione del compilatore [/ZP](../build/reference/zp-struct-member-alignment.md), che fornisce solo il controllo a livello di modulo. il **pacchetto** viene applicato alla prima dichiarazione di **struttura**, **Unione**o **classe** dopo che il pragma è stato individuato. il **pacchetto** non ha alcun effetto sulle definizioni. La chiamata a **Pack** senza argomenti imposta *n* sul valore impostato nell'opzione `/Zp`del compilatore. Se l'opzione del compilatore non è impostata, il valore predefinito è 8.

Se si modifica l'allineamento di una struttura, ciò può non utilizzare molto spazio in memoria, ma è possibile osservare una riduzione delle prestazioni o addirittura ottenere un'eccezione generata dall'hardware per l'accesso non allineato.  È possibile modificare questo comportamento dell'eccezione usando [SetErrorMode](/windows/win32/api/errhandlingapi/nf-errhandlingapi-seterrormode).

Per ulteriori informazioni sulla modifica dell'allineamento, vedere questi argomenti:

- [__alignof](../cpp/alignof-operator.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [Esempi di allineamento della struttura](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

   > [!WARNING]
   > Si noti che in Visual Studio 2015 e versioni successive è possibile usare gli operatori standard alignas e alignof, che, a differenza di `__alignof` e `declspec( align )`, sono portabili tra compilatori. Lo C++ standard non risolve la compressione, quindi è necessario usare **Pack** (o l'estensione corrispondente in altri compilatori) per specificare gli allineamenti inferiori alle dimensioni della parola dell'architettura di destinazione.

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
#pragma pack(pop, r1, 2)   // n = 2 , stack popped
#pragma pack(show)   // C4810
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)