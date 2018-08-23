---
title: '#include (direttiva) (C/C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#include'
dev_langs:
- C++
helpviewer_keywords:
- preprocessor, directives
- '#include directive'
- include directive (#include)
ms.assetid: 17067dc0-8db1-4f2d-b43e-ec12ecf83238
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b2ab8696adf30363d63321200fa87f31d18be369
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541592"
---
# <a name="include-directive-cc"></a>Direttiva #include (C/C++)
Indica al preprocessore di trattare il contenuto di un file specificato come se tale contenuto fosse visualizzato nel programma di origine nel punto in cui è presente la direttiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include  "path-spec"  
#include  <path-spec>  
```  
  
## <a name="remarks"></a>Note 

È possibile organizzare definizioni di macro e di costanti in file di inclusione e quindi usare **#include** direttive per aggiungerli ai file di origine. I file di inclusione sono inoltre utili per incorporare le dichiarazioni delle variabili esterne e i tipi di dati complessi. I tipi devono essere definiti e denominati una sola volta in un file di inclusione creato a tale scopo.  
  
`path-spec` è il nome file, preceduto facoltativamente da una specifica di directory. Il nome file deve essere il nome di un file esistente. La sintassi di `path-spec` dipende dal sistema operativo nel quale il programma è compilato.  
  
Per informazioni su come fare riferimento agli assembly in un'applicazione C++ compilata utilizzando [/clr](../build/reference/clr-common-language-runtime-compilation.md), vedere [#using](../preprocessor/hash-using-directive-cpp.md).  
  
Entrambi i formati di sintassi provocano la sostituzione della direttiva dall'intero contenuto del file di inclusione specificato. La differenza tra le due forme è l'ordine in cui il preprocessore cerca i file di intestazione quando il percorso non è specificato in modo completo. Nella tabella seguente viene evidenziata la differenza tra i due formati di sintassi.  
  
|Formato di sintassi|Operazione|  
|-----------------|------------|  
|Formato con virgolette|Il preprocessore cerca i file di inclusione nell'ordine seguente:<br /><br /> 1) nella stessa directory del file che contiene il **#include** istruzione.<br /><br /> 2) nelle directory dei attualmente aperti includere file, in ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.<br /><br /> 3) nel percorso specificato da ogni `/I` opzione del compilatore.<br /><br /> 4)<br /><br /> Lungo i percorsi specificati dalla variabile di ambiente INCLUDE.|  
|Formato con parentesi angolari|Il preprocessore cerca i file di inclusione nell'ordine seguente:<br /><br /> 1) nel percorso specificato da ogni `/I` opzione del compilatore.<br /><br /> 2) quando viene eseguita la compilazione dalla riga di comando, lungo i percorsi specificati dalla variabile di ambiente INCLUDE.|  
  
Il preprocessore arresta la ricerca non appena trova un file con il nome specificato. Se si include un percorso completo e non ambiguo per il file di inclusione tra virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.  
  
Se il nome file racchiuso tra virgolette è una specifica del percorso non completa, il preprocessore esegue la ricerca prima nella directory del file padre. Un file padre è il file che contiene il **#include** direttiva. Se ad esempio si include un file denominato `file2` in un file denominato `file1`, `file1` è il file padre.  
  
Includere i file possono essere "annidati", vale a dire, un' **#include** direttiva può essere visualizzato in un file denominato da un'altra **#include** direttiva. `file2` potrebbe ad esempio includere `file3`. In questo caso, `file1` rimane sempre il padre di `file2`, ma sarebbe padre del padre di `file3`.  
  
Quando i file di inclusione sono annidati e la compilazione viene eseguita sulla riga di comando, la ricerca inizia nelle directory del file padre, quindi procede nelle directory padre del padre. Questo significa che la ricerca inizia in base alla directory che contiene l'origine attualmente in fase di elaborazione. Se il file non viene trovato, la ricerca si sposta nelle directory specificate dal `/I` opzione del compilatore. In conclusione, la ricerca viene eseguita nelle directory specificate nella variabile di ambiente INCLUDE.  
  
Nell'ambiente di sviluppo la variabile di ambiente INCLUDE viene ignorata. Per informazioni su come impostare le directory in cui vengono cercate i file di inclusione, questo vale anche per la variabile di ambiente LIB, vedere [VC + + Directories Property Page](../ide/vcpp-directories-property-page.md).  
  
Nell'esempio seguente viene illustrata l'inclusione di file tramite parentesi angolari:  
  
```  
#include <stdio.h>  
```  
  
In questo esempio viene aggiunto il contenuto del file denominato STDIO.H al programma di origine. Le parentesi acute indicano al preprocessore di cercare le directory specificate dalla variabile di ambiente INCLUDE per STDIO. H, dopo averla eseguita nelle directory specificate dal `/I` opzione del compilatore.  
  
Il seguente esempio mostra l'inclusione di file tramite il formato con virgolette:  
  
```  
#include "defs.h"  
```  
  
In questo esempio viene aggiunto il contenuto del file specificato da DEFS.H al programma di origine. Le virgolette doppie indicano che il preprocessore esamina innanzitutto la directory contenente il file di origine padre.  
  
L'annidamento dei file di inclusione può continuare fino a 10 livelli. Quando annidata **#include** viene elaborato, il preprocessore continua a inserire il file di inclusione nel file di origine originale.  
  
**Sezione specifica Microsoft**  
  
Per individuare i file di origine, il preprocessore esamina innanzitutto la directory specificati dal `/I` opzione del compilatore. Se il `/I` opzione non è presente o ha esito negativo, il preprocessore utilizza variabile di ambiente INCLUDE per trovare tutti i file di inclusione tra parentesi angolari. Variabile di ambiente INCLUDE e `/I` opzione del compilatore può contenere più percorsi, separati da punti e virgola (;). Se più di una directory viene visualizzato come parte di `/I` opzione o all'interno della variabile di ambiente INCLUDE, il preprocessore Cerca li nell'ordine in cui vengono visualizzati.  
  
Il comando  
  
```  
CL /ID:\MSVC\INCLUDE MYPROG.C  
```  
  
determina ad esempio l'esecuzione di una ricerca nella directory D:\MSVC\INCLUDE per individuare i file di inclusione, quale STDIO.H. I comandi  
  
```  
SET INCLUDE=D:\MSVC\INCLUDE  
CL MYPROG.C  
```  
  
hanno lo stesso effetto. Se entrambi i set di ricerca hanno esito negativo, verrà generato un errore irreversibile del compilatore.  
  
Se per un file di inclusione con un percorso che include i due punti (ad esempio F:\MSVC\SPECIAL\INCL\TEST.H) viene specificato il nome completo, il preprocessore segue il percorso.  
  
I file di inclusione specificati come `#include` "`path-spec`", la ricerca nelle directory inizia con la directory del file padre e quindi procede nelle directory padre del padre. Vale a dire, la ricerca inizia in base alla directory che contiene il file di origine che contiene il **#include** direttiva in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse racchiuso tra parentesi angolari.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)