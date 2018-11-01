---
title: const_seg
ms.date: 09/17/2018
f1_keywords:
- vc-pragma.const_seg
- const_seg_CPP
helpviewer_keywords:
- pragmas, const_seg
- const_seg pragma
ms.assetid: 1eb58ee2-fb0e-4a39-9621-699c8f5ef957
ms.openlocfilehash: ce932b068f5751b7cf1ceab969312defd18336f7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648344"
---
# <a name="constseg"></a>const_seg
Specifica il segmento in cui [const](../cpp/const-cpp.md) le variabili vengono archiviate nel file obj.

## <a name="syntax"></a>Sintassi

```
#pragma const_seg ( [ [ { push | pop}, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )
```

### <a name="parameters"></a>Parametri

**push**<br/>
(Facoltativo) Inserisce un record nello stack del compilatore interno. Oggetto **push** può avere un *identifier* e *nome segmento*.

**pop**<br/>
(Facoltativo) Rimuove un record dall'inizio dello stack del compilatore interno.

*identifier*<br/>
(Facoltativo) Quando abbinata **push**, assegna un nome al record nello stack del compilatore interno. Quando abbinata **pop**, estrae record dallo stack interno finché *identificatore* viene rimosso; se *identificatore* non viene trovato nello stack interno, nulla viene estratto.

Usando *identifier* consente di più record da estrarre con un'unica **pop** comando.

"*-nome del segmento*"<br/>
(Facoltativo) Il nome di un segmento. Quando abbinata **pop**, viene visualizzato lo stack e *-nome del segmento* diventa il nome del segmento attivo.

"*-classe di segmento*"<br/>
(Facoltativo) Opzione inclusa per compatibilità con C++ precedenti alla versione 2.0. Ignorato.

## <a name="remarks"></a>Note

Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.

I file OBJ possono essere visualizzati con il [dumpbin](../build/reference/dumpbin-command-line.md) dell'applicazione. Il segmento predefinito nel file con estensione obj per le variabili `const` è .rdata. Alcune variabili `const`, come le variabili scalari, vengono automaticamente inserite nel flusso di codice. Il codice inline non verrà visualizzato in .rdata.

La definizione di un oggetto che richiede l'inizializzazione dinamica in un `const_seg` produce un comportamento non definito.

`#pragma const_seg` senza parametri reimposta il segmento su .rdata.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_const_seg.cpp
// compile with: /EHsc
#include <iostream>

const int i = 7;               // inlined, not stored in .rdata
const char sz1[]= "test1";     // stored in .rdata

#pragma const_seg(".my_data1")
const char sz2[]= "test2";     // stored in .my_data1

#pragma const_seg(push, stack1, ".my_data2")
const char sz3[]= "test3";     // stored in .my_data2

#pragma const_seg(pop, stack1) // pop stack1 from stack
const char sz4[]= "test4";     // stored in .my_data1

int main() {
    using namespace std;
   // const data must be referenced to be put in .obj
   cout << sz1 << endl;
   cout << sz2 << endl;
   cout << sz3 << endl;
   cout << sz4 << endl;
}
```

```Output
test1
test2
test3
test4
```

## <a name="comments"></a>Commenti

Visualizzare [/Section](../build/reference/section-specify-section-attributes.md) per un elenco dei nomi non è consigliabile usare durante la creazione di una sezione.

È anche possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e funzioni ([code_seg](../preprocessor/code-seg.md)).

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)