---
description: 'Altre informazioni su: direttiva #include (C/C++)'
title: '#Direttiva include (C/C++)'
ms.date: 01/19/2021
f1_keywords:
- '#include'
helpviewer_keywords:
- preprocessor, directives
- '#include directive'
- include directive (#include)
ms.openlocfilehash: 4ba9b07b77d919e8587fc392518d268b935e0c46
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713623"
---
# <a name="include-directive-cc"></a>`#include` direttiva (C/C++)

Indica al preprocessore di includere il contenuto di un file specificato nel punto in cui viene visualizzata la direttiva.

## <a name="syntax"></a>Sintassi

> **`#include "`***percorso-spec***`"`**\
> **`#include <`***percorso-spec***`>`**

## <a name="remarks"></a>Osservazioni

È possibile organizzare definizioni di macro e di costanti in *file di inclusione* (noti anche come *file di intestazione*), quindi utilizzare **`#include`** le direttive per aggiungerle a qualsiasi file di origine. I file di inclusione sono inoltre utili per incorporare le dichiarazioni delle variabili esterne e i tipi di dati complessi. I tipi devono essere definiti e denominati una sola volta in un file di inclusione creato a tale scopo.

*Path-spec* è un nome di file che può essere facoltativamente preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La sintassi di *path-spec* dipende dal sistema operativo in cui viene compilato il programma.

Per informazioni su come fare riferimento agli assembly in un'applicazione C++ compilata usando [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) , vedere [ `#using` Directive](../preprocessor/hash-using-directive-cpp.md).

Entrambe le forme di sintassi comportano la **`#include`** sostituzione della direttiva dall'intero contenuto del file specificato. La differenza tra le due forme è l'ordine dei percorsi in cui il preprocessore esegue la ricerca quando il percorso viene specificato in modo incompleto. Nella tabella seguente viene evidenziata la differenza tra i due formati di sintassi.

| Formato di sintassi | Azione |
|--|--|
| Formato con virgolette | Il preprocessore cerca i file di inclusione nell'ordine seguente:<br/><br/> 1) nella stessa directory del file che contiene l' **`#include`** istruzione.<br/><br/> 2) nelle directory dei file di inclusione attualmente aperti nell'ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.<br/><br/> 3) lungo il percorso specificato da ogni **`/I`** opzione del compilatore.<br/><br/> 4) lungo i percorsi specificati dalla `INCLUDE` variabile di ambiente. |
| Formato con parentesi angolari | Il preprocessore cerca i file di inclusione nell'ordine seguente:<br/><br/> 1) lungo il percorso specificato da ogni **`/I`** opzione del compilatore.<br/><br/> 2) quando si esegue la compilazione nella riga di comando, lungo i percorsi specificati dalla variabile di `INCLUDE` ambiente. |

Il preprocessore arresta la ricerca non appena trova un file con il nome specificato. Se si racchiude una specifica di percorso completa e non ambigua per il file di inclusione tra virgolette doppie ( `" "` ), il preprocessore cerca solo tale specifica del percorso e ignora le directory standard.

Se il nome file racchiuso tra virgolette doppie è una specifica del percorso incompleta, il preprocessore cerca prima la directory del file *padre* . Un file padre è il file che contiene la **`#include`** direttiva. Ad esempio, se si include un file denominato *file2* in un file denominato *file1*, *file1* è il file padre.

I file di inclusione possono essere *annidati*: una **`#include`** direttiva può essere inclusa in un file denominato da un'altra **`#include`** direttiva. Ad esempio, *file2* può includere *file3*. In questo caso, *file1* sarebbe ancora l'elemento padre di *file2*, ma sarebbe il padre del *file3*.

Quando i file di inclusione sono annidati e quando si esegue la compilazione nella riga di comando, la ricerca nelle directory inizia nella directory del file padre. Quindi procede nelle directory dei file padre del padre. Questo significa che la ricerca inizia in base alla directory che contiene l'origine attualmente in fase di elaborazione. Se il file non viene trovato, la ricerca viene spostata nelle directory specificate dall'opzione del compilatore [ `/I` (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md) . Infine, viene eseguita la ricerca nelle directory specificate dalla `INCLUDE` variabile di ambiente.

All'interno dell'ambiente di sviluppo di Visual Studio, la `INCLUDE` variabile di ambiente viene ignorata. Vengono invece utilizzati i valori specificati nelle proprietà del progetto per le directory di inclusione. Per ulteriori informazioni su come impostare le directory di inclusione in Visual Studio, vedere [directory](../build/reference/vcpp-directories-property-page.md#directory-types) di inclusione e [directory di inclusione aggiuntive](../build/reference/c-cpp-prop-page.md#additional-include-directories).

Nell'esempio seguente viene illustrata l'inclusione di file tramite parentesi angolari:

```C
#include <stdio.h>
```

Nell'esempio viene aggiunto il contenuto del file denominato *`stdio.h`* al programma di origine. Le parentesi angolari fanno in modo che il preprocessore cerchi le directory specificate dalla `INCLUDE` variabile di ambiente per, dopo la ricerca nelle *`stdio.h`* directory specificate dall' **`/I`** opzione del compilatore.

Il seguente esempio mostra l'inclusione di file tramite il formato con virgolette:

```C
#include "defs.h"
```

Nell'esempio viene aggiunto il contenuto del file specificato da *`defs.h`* al programma di origine. Le virgolette doppie indicano che il preprocessore esamina innanzitutto la directory contenente il file di origine padre.

L'annidamento dei file di inclusione può continuare fino a 10 livelli. Al termine dell'elaborazione dell'oggetto annidato **`#include`** , il preprocessore continua a inserire il file di inclusione padre di inclusione nel file di origine originale.

**Specifiche di Microsoft**

Per individuare i file di origine da includere, il preprocessore cerca prima le directory specificate dall' **`/I`** opzione del compilatore. Se l' **`/I`** opzione non è presente. in caso contrario, il preprocessore utilizza la `INCLUDE` variabile di ambiente per trovare i file di inclusione tra parentesi angolari. La `INCLUDE` variabile di ambiente e l' **`/I`** opzione del compilatore possono contenere più percorsi, separati da punti e virgola ( **`;`** ). Se più directory vengono visualizzate come parte dell' **`/I`** opzione o all'interno della `INCLUDE` variabile di ambiente, il preprocessore esegue la ricerca nell'ordine in cui sono visualizzate.

Il comando

```cmd
CL /ID:\msvc\include myprog.c
```

fa in modo che il preprocessore cerchi nella directory i *`D:\msvc\include\`* file di inclusione, ad esempio *`stdio.h`* . I comandi

```cmd
SET INCLUDE=D:\msvc\include
CL myprog.c
```

hanno lo stesso effetto. Se entrambi i set di ricerca hanno esito negativo, verrà generato un errore irreversibile del compilatore.

Se il nome del file è completamente specificato per un file di inclusione con un percorso che include i due punti (ad esempio, *`F:\MSVC\SPECIAL\INCL\TEST.H`* ), il preprocessore segue il percorso.

Per i file di inclusione specificati come `#include "path-spec"` , la ricerca della directory inizia nella directory del file padre e quindi procede nelle directory dei file padre del padre. Ovvero, la ricerca inizia in relazione alla directory che contiene il file di origine in fase di elaborazione. Se non è presente un file padre del padre e il file non viene trovato, la ricerca prosegue come se il nome file fosse racchiuso tra parentesi angolari.

**FINE specifica di Microsoft**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
[`/I` (Directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md)
