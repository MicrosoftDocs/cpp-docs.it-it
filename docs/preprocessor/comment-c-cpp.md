---
description: 'Altre informazioni su: pragma comment'
title: comment (pragma)
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.comment
- comment_CPP
helpviewer_keywords:
- annotations [C++]
- comments [C++], compiled files
- pragmas, comment
- comment pragma
ms.assetid: 20f099ff-6303-49b3-9c03-a94b6aa69b85
ms.openlocfilehash: 71172632ee1589c3f6d66136e9567929bff5d08c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300814"
---
# <a name="comment-pragma"></a>comment (pragma)

Inserisce un record di commento in un file oggetto o in un file eseguibile.

## <a name="syntax"></a>Sintassi

> **commento #pragma (** *Comment-Type* [ **,** "*Comment-String*"] **)**

## <a name="remarks"></a>Commenti

Il *tipo di commento* è uno degli identificatori predefiniti, descritti di seguito, che specifica il tipo di record di commento. La *stringa di commento* facoltativa è un valore letterale stringa che fornisce informazioni aggiuntive per alcuni tipi di commento. Poiché *Comment-String* è un valore letterale stringa, rispetta tutte le regole per i valori letterali stringa in relazione ai caratteri di escape, alle virgolette incorporate ( `"` ) e alla concatenazione.

### <a name="compiler"></a>compiler

Inserisce il nome e il numero di versione del compilatore nel file oggetto. Questo record di commento viene ignorato dal linker. Se si specifica un parametro di *stringa di commento* per questo tipo di record, il compilatore genera un avviso.

### <a name="lib"></a>lib

Inserisce un record di ricerca nella libreria nel file oggetto. Questo tipo di commento deve essere accompagnato da un parametro di *stringa di commento* contenente il nome (e possibilmente il percorso) della libreria in cui si vuole che il linker cerchi. Il nome della libreria segue i record di ricerca della libreria predefiniti nel file oggetto; il linker cerca questa libreria come se fosse stata denominata nella riga di comando, a condizione che la libreria non sia specificata con [/NODEFAULTLIB](../build/reference/nodefaultlib-ignore-libraries.md). È possibile inserire più record di ricerca nella libreria nello stesso file di origine. Ogni record viene visualizzato nel file oggetto nello stesso ordine in cui è stato individuato nel file di origine.

Se l'ordine della libreria predefinita e di una libreria aggiunta è importante, la compilazione con l'opzione [/ZL](../build/reference/zl-omit-default-library-name.md) impedisce che il nome della libreria predefinita venga inserito nel modulo Object. Un secondo pragma di commento può quindi essere utilizzato per inserire il nome della libreria predefinita dopo la libreria aggiunta. Le librerie elencate con tali pragma verranno visualizzate nel modulo di oggetto nello stesso ordine in cui vengono trovate nel codice sorgente.

### <a name="linker"></a>linker

Inserisce un' [opzione del linker](../build/reference/linker-options.md) nel file oggetto. È possibile utilizzare questo tipo di commento per specificare un'opzione del linker anziché passarla alla riga di comando o specificarla nell'ambiente di sviluppo. È possibile ad esempio specificare l'opzione /include per imporre l'inclusione di un simbolo:

```C
#pragma comment(linker, "/include:__mySymbol")
```

Per passare all'identificatore del linker sono disponibili solo le opzioni del linker seguenti (*tipo di commento*):

- [/DEFAULTLIB](../build/reference/defaultlib-specify-default-library.md)

- [/EXPORT](../build/reference/export-exports-a-function.md)

- [/INCLUDE](../build/reference/include-force-symbol-references.md)

- [/MANIFESTDEPENDENCY](../build/reference/manifestdependency-specify-manifest-dependencies.md)

- [/MERGE](../build/reference/merge-combine-sections.md)

- [/SECTION](../build/reference/section-specify-section-attributes.md)

### <a name="user"></a>utente

Inserisce un commento generale nel file oggetto. Il parametro della *stringa di commento* contiene il testo del commento. Questo record di commento viene ignorato dal linker.

## <a name="examples"></a>Esempio

Il pragma seguente indica al linker di eseguire la ricerca della libreria EMAPI.LIB durante il collegamento. Il linker esegue la ricerca prima nella directory di lavoro, quindi nel percorso specificato nella variabile di ambiente LIB.

```C
#pragma comment( lib, "emapi" )
```

Il pragma seguente indica al compilatore di inserire il nome e il numero di versione del compilatore nel file oggetto:

```C
#pragma comment( compiler )
```

Per i commenti che accettano un parametro di *stringa di commento* , è possibile usare una macro in qualsiasi punto in cui si userà un valore letterale stringa, a condizione che la macro si espande in un valore letterale stringa. È inoltre possibile concatenare qualsiasi combinazione di valori letterali stringa e di macro che si espandono a valori letterali stringa. L'istruzione seguente è ad esempio accettabile:

```C
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )
```

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
