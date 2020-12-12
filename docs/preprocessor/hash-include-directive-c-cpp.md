---
description: 'Altre informazioni su: direttiva #include (C/C++)'
title: '#Direttiva include (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#include'
helpviewer_keywords:
- preprocessor, directives
- '#include directive'
- include directive (#include)
ms.assetid: 17067dc0-8db1-4f2d-b43e-ec12ecf83238
ms.openlocfilehash: 491c6f06a6e2924c61ecd56dcb2ab2e5f4243512
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300426"
---
# <a name="include-directive-cc"></a>direttiva #include (C/C++)

Indica al preprocessore di trattare il contenuto di un file specificato come se tale contenuto fosse visualizzato nel programma di origine nel punto in cui è presente la direttiva.

## <a name="syntax"></a>Sintassi

> **#include** "*path-spec*" \
> **#include**\<*path-spec*>

## <a name="remarks"></a>Commenti

È possibile organizzare definizioni di macro e di costanti in file di inclusione, quindi utilizzare le direttive **#include** per aggiungerle a qualsiasi file di origine. I file di inclusione sono inoltre utili per incorporare le dichiarazioni delle variabili esterne e i tipi di dati complessi. I tipi devono essere definiti e denominati una sola volta in un file di inclusione creato a tale scopo.

*Path-spec* è un nome di file che può essere facoltativamente preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La sintassi di *path-spec* dipende dal sistema operativo in cui viene compilato il programma.

Per informazioni su come fare riferimento agli assembly in un'applicazione C++ compilata usando [/CLR](../build/reference/clr-common-language-runtime-compilation.md), vedere [#using](../preprocessor/hash-using-directive-cpp.md).

Entrambi i formati di sintassi provocano la sostituzione della direttiva dall'intero contenuto del file di inclusione specificato. La differenza tra le due forme è l'ordine in cui il preprocessore cerca i file di intestazione quando il percorso non è specificato in modo completo. Nella tabella seguente viene evidenziata la differenza tra i due formati di sintassi.

|Formato di sintassi|Azione|
|---|------------|
|Formato con virgolette|Il preprocessore cerca i file di inclusione nell'ordine seguente:<br/><br/> 1) nella stessa directory del file che contiene l'istruzione **#include** .<br/><br/> 2) nelle directory dei file di inclusione attualmente aperti nell'ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.<br/><br/> 3) lungo il percorso specificato da ogni opzione del compilatore **/i** .<br/><br/> 4) lungo i percorsi specificati dalla variabile di ambiente INCLUDE.|
|Formato con parentesi angolari|Il preprocessore cerca i file di inclusione nell'ordine seguente:<br/><br/> 1) lungo il percorso specificato da ogni opzione del compilatore **/i** .<br/><br/> 2) quando si esegue la compilazione nella riga di comando, lungo i percorsi specificati dalla variabile di ambiente INCLUDE.|

Il preprocessore arresta la ricerca non appena trova un file con il nome specificato. Se si racchiude una specifica di percorso completa e non ambigua per il file di inclusione tra virgolette doppie ( `" "` ), il preprocessore cerca solo tale specifica del percorso e ignora le directory standard.

Se il nome file racchiuso tra virgolette è una specifica del percorso non completa, il preprocessore esegue la ricerca prima nella directory del file padre. Un file padre è il file che contiene la direttiva **#include** . Ad esempio, se si include un file denominato *file2* in un file denominato *file1*, *file1* è il file padre.

I file di inclusione possono essere "annidati": una direttiva **#include** può essere visualizzata in un file denominato da un'altra direttiva **#include** . Ad esempio, *file2* può includere *file3*. In questo caso, *file1* sarebbe ancora l'elemento padre di *file2*, ma sarebbe il "nonno" di *file3*.

Quando i file di inclusione sono annidati e quando si esegue la compilazione nella riga di comando, la ricerca nelle directory inizia nelle directory del file padre. Quindi procede nelle directory dei file padre del padre. Questo significa che la ricerca inizia in base alla directory che contiene l'origine attualmente in fase di elaborazione. Se il file non viene trovato, la ricerca viene spostata nelle directory specificate dall'opzione del compilatore [/i (directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md) . In conclusione, la ricerca viene eseguita nelle directory specificate nella variabile di ambiente INCLUDE.

Dall'ambiente di sviluppo di Visual Studio, la variabile di ambiente INCLUDE viene ignorata. Per informazioni su come impostare le directory in cui vengono cercati i file di inclusione e di libreria, vedere la [pagina delle proprietà directory di VC + +](../build/reference/vcpp-directories-property-page.md).

Nell'esempio seguente viene illustrata l'inclusione di file tramite parentesi angolari:

```C
#include <stdio.h>
```

In questo esempio viene aggiunto il contenuto del file denominato STDIO.H al programma di origine. Le parentesi angolari fanno in modo che il preprocessore cerchi le directory specificate dalla variabile di ambiente INCLUDE per STDIO. H, dopo aver cercato le directory specificate dall'opzione del compilatore **/i** .

Il seguente esempio mostra l'inclusione di file tramite il formato con virgolette:

```C
#include "defs.h"
```

In questo esempio viene aggiunto il contenuto del file specificato da DEFS.H al programma di origine. Le virgolette doppie indicano che il preprocessore esamina innanzitutto la directory contenente il file di origine padre.

L'annidamento dei file di inclusione può continuare fino a 10 livelli. Quando il **#include** annidato viene elaborato, il preprocessore continua a inserire il file di inclusione di inclusione nel file di origine originale.

**Specifico di Microsoft**

Per individuare i file di origine dei, il preprocessore cerca prima le directory specificate dall'opzione del compilatore **/i** . Se l'opzione **/i** non è presente o se ha esito negativo, il preprocessore utilizza la variabile di ambiente include per trovare i file di inclusione tra parentesi angolari. La variabile di ambiente INCLUDE e l'opzione del compilatore **/i** possono contenere più percorsi, separati da punti e virgola (**;**). Se più directory vengono visualizzate come parte dell'opzione **/i** o nella variabile di ambiente include, il preprocessore esegue la ricerca nell'ordine in cui sono visualizzate.

Il comando

```cmd
CL /ID:\MSVC\INCLUDE MYPROG.C
```

determina ad esempio l'esecuzione di una ricerca nella directory D:\MSVC\INCLUDE per individuare i file di inclusione, quale STDIO.H. I comandi

```cmd
SET INCLUDE=D:\MSVC\INCLUDE
CL MYPROG.C
```

hanno lo stesso effetto. Se entrambi i set di ricerca hanno esito negativo, verrà generato un errore irreversibile del compilatore.

Se per un file di inclusione con un percorso che include i due punti (ad esempio F:\MSVC\SPECIAL\INCL\TEST.H) viene specificato il nome completo, il preprocessore segue il percorso.

Per i file di inclusione specificati come `#include "path-spec"` , la ricerca nelle directory inizia con la directory del file padre e quindi procede nelle directory dei file padre del padre. Ovvero, la ricerca inizia in base alla directory che contiene il file di origine che contiene la direttiva **#include** in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse racchiuso tra parentesi angolari.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
[/I (Directory di inclusione aggiuntive)](../build/reference/i-additional-include-directories.md)
