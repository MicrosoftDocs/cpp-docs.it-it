---
description: Altre informazioni sulla direttiva comment pragma in Microsoft C/C++
title: Commento pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.comment
- comment_CPP
helpviewer_keywords:
- annotations [C++]
- comments [C++], compiled files
- pragma, comment
- comment pragma
no-loc:
- pragma
ms.openlocfilehash: 8a4df005b672cb108a2b55004a1149693acd4f95
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713064"
---
# <a name="comment-no-locpragma"></a>`comment` pragma

Inserisce un record di commento in un file oggetto o in un file eseguibile.

## <a name="syntax"></a>Sintassi

> **`#pragma comment(`***Comment-Type* [ **`,`** "*Comment-String*"]**`)`**

## <a name="remarks"></a>Osservazioni

Il *tipo di commento* è uno degli identificatori predefiniti, descritti di seguito, che specifica il tipo di record di commento. La *stringa di commento* facoltativa è un valore letterale stringa che fornisce informazioni aggiuntive per alcuni tipi di commento. Poiché *Comment-String* è un valore letterale stringa, rispetta tutte le regole per i valori letterali stringa durante l'utilizzo di caratteri di escape, virgolette incorporate ( `"` ) e concatenazione.

### <a name="compiler"></a>compiler

Inserisce il nome e il numero di versione del compilatore nel file oggetto. Questo record di commento viene ignorato dal linker. Se si specifica un parametro di *stringa di commento* per questo tipo di record, il compilatore genera un avviso.

### <a name="lib"></a>lib

Inserisce un record di ricerca nella libreria nel file oggetto. Questo tipo di commento deve essere accompagnato da un parametro di *stringa di commento* con il nome (e possibilmente il percorso) della libreria in cui si vuole che il linker cerchi. Il nome della libreria segue i record di ricerca della libreria predefiniti nel file oggetto. Il linker cerca questa libreria nello stesso modo in cui è stata specificata nella riga di comando, purché la libreria non sia specificata tramite [`/nodefaultlib`](../build/reference/nodefaultlib-ignore-libraries.md) . È possibile inserire più record di ricerca nella libreria nello stesso file di origine. Ogni record viene visualizzato nel file oggetto nello stesso ordine in cui si trova nel file di origine.

Se l'ordine della libreria predefinita e di una libreria aggiunta è importante, la compilazione con l' [`/Zl`](../build/reference/zl-omit-default-library-name.md) opzione impedisce che il nome della libreria predefinita venga inserito nel modulo dell'oggetto. Un secondo commento pragma può quindi essere usato per inserire il nome della libreria predefinita dopo la libreria aggiunta. Le librerie elencate con queste pragma direttive verranno visualizzate nel modulo oggetto nello stesso ordine in cui sono state trovate nel codice sorgente.

### <a name="linker"></a>linker

Inserisce un' [opzione del linker](../build/reference/linker-options.md) nel file oggetto. È possibile utilizzare questo tipo di commento per specificare un'opzione del linker anziché passarla alla riga di comando o specificarla nell'ambiente di sviluppo. È possibile ad esempio specificare l'opzione /include per imporre l'inclusione di un simbolo:

```C
#pragma comment(linker, "/include:__mySymbol")
```

Per passare all'identificatore del linker sono disponibili solo le opzioni del linker seguenti (*tipo di commento*):

- [`/DEFAULTLIB`](../build/reference/defaultlib-specify-default-library.md)

- [`/EXPORT`](../build/reference/export-exports-a-function.md)

- [`/INCLUDE`](../build/reference/include-force-symbol-references.md)

- [`/MANIFESTDEPENDENCY`](../build/reference/manifestdependency-specify-manifest-dependencies.md)

- [`/MERGE`](../build/reference/merge-combine-sections.md)

- [`/SECTION`](../build/reference/section-specify-section-attributes.md)

### <a name="user"></a>utente

Inserisce un commento generale nel file oggetto. Il parametro della *stringa di commento* contiene il testo del commento. Questo record di commento viene ignorato dal linker.

## <a name="examples"></a>Esempi

Il pragma linker seguente consente di cercare il EMAPI. Libreria LIB durante il collegamento. Il linker esegue la ricerca prima nella directory di lavoro corrente e quindi nel percorso specificato nella variabile di ambiente LIB.

```C
#pragma comment( lib, "emapi" )
```

Il codice seguente pragma fa in modo che il compilatore inserisca il nome e il numero di versione del compilatore nel file oggetto:

```C
#pragma comment( compiler )
```

Per i commenti che accettano un parametro di *stringa di commento* , è possibile usare una macro in qualsiasi punto in cui si userà un valore letterale stringa, purché la macro si espande in un valore letterale stringa. È inoltre possibile concatenare qualsiasi combinazione di valori letterali stringa e di macro che si espandono a valori letterali stringa. L'istruzione seguente è ad esempio accettabile:

```C
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
