---
title: commento (C/C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.comment
- comment_CPP
dev_langs:
- C++
helpviewer_keywords:
- annotations [C++]
- comments [C++], compiled files
- pragmas, comment
- comment pragma
ms.assetid: 20f099ff-6303-49b3-9c03-a94b6aa69b85
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30683bb76ce674becb81321607bc95fefdb78ac1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842508"
---
# <a name="comment-cc"></a>comment (C/C++)
Inserisce un record di commento in un file oggetto o in un file eseguibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma comment( comment-type [,"commentstring"] )  
```  
  
## <a name="remarks"></a>Note  
 Il *del tipo di commento* è uno degli identificatori predefiniti, descritti di seguito, che specifica il tipo di record di commento. L'elemento `commentstring` facoltativo è un valore letterale stringa che fornisce informazioni aggiuntive per alcuni tipi di commento. Poiché `commentstring` è una stringa letterale, rispetta tutte le regole per i valori letterali stringa rispetto a caratteri di escape, virgolette incorporate (**"**) e concatenazione.  
  
 **compiler**  
 Inserisce il nome e il numero di versione del compilatore nel file oggetto. Questo record di commento viene ignorato dal linker. Se si fornisce un parametro `commentstring` per questo tipo di record, il compilatore genera un avviso.  
  
 **exestr**  
 Inserisce `commentstring` nel file oggetto. In fase di collegamento questa stringa viene inserita nel file eseguibile. La stringa non viene caricata in memoria quando viene caricato il file eseguibile, ma è disponibile con un programma che cerca le stringhe stampabili nei file. Un utilizzo di questo tipo di record di commento prevede l'inclusione di un numero di versione o di informazioni simili in un file eseguibile.  
  
 `exestr` è deprecato e verrà rimosso nelle versioni future. Il linker non elabora il record di commento.  
  
 **lib**  
 Inserisce un record di ricerca nella libreria nel file oggetto. Questo tipo di commento deve essere seguito da un parametro `commentstring` contenente il nome (ed eventualmente il percorso) della libreria in cui il linker esegue la ricerca. Il nome della libreria segue i record di ricerca di libreria predefinita nel file oggetto; il linker cerca questa libreria come se si fosse stata denominata nella riga di comando fornite che la libreria non è specificata con [/nodefaultlib](../build/reference/nodefaultlib-ignore-libraries.md). È possibile inserire più record di ricerca nella libreria nello stesso file di origine. Ogni record viene visualizzato nel file oggetto nello stesso ordine in cui è stato individuato nel file di origine.  
  
 Se l'ordine di libreria predefinita e una libreria aggiunta è importante, la compilazione con il [/Zl](../build/reference/zl-omit-default-library-name.md) commutatore impedirà il nome della libreria predefinita venga inserito nel modulo di oggetto. Un secondo pragma di commento può quindi essere utilizzato per inserire il nome della libreria predefinita dopo la libreria aggiunta. Le librerie elencate con tali pragma verranno visualizzate nel modulo di oggetto nello stesso ordine in cui vengono trovate nel codice sorgente.  
  
 **linker**  
 Posizioni un [l'opzione del linker](../build/reference/linker-options.md) nel file oggetto. È possibile utilizzare questo tipo di commento per specificare un'opzione del linker anziché passarla alla riga di comando o specificarla nell'ambiente di sviluppo. È possibile ad esempio specificare l'opzione /include per imporre l'inclusione di un simbolo:  
  
```  
#pragma comment(linker, "/include:__mySymbol")  
```  
  
 Solo le operazioni seguenti (*del tipo di commento*) sono disponibili da passare all'identificatore del linker le opzioni del linker:  
  
-   [/DEFAULTLIB](../build/reference/defaultlib-specify-default-library.md)  
  
-   [/EXPORT](../build/reference/export-exports-a-function.md)  
  
-   [/INCLUDE](../build/reference/include-force-symbol-references.md)  
  
-   [/MANIFESTDEPENDENCY](../build/reference/manifestdependency-specify-manifest-dependencies.md)  
  
-   [/MERGE](../build/reference/merge-combine-sections.md)  
  
-   [O DELLA SEZIONE](../build/reference/section-specify-section-attributes.md)  
  
 **user**  
 Inserisce un commento generale nel file oggetto. Il parametro `commentstring` contiene il testo del commento. Questo record di commento viene ignorato dal linker.  
  
 Il pragma seguente indica al linker di eseguire la ricerca della libreria EMAPI.LIB durante il collegamento. Il linker esegue la ricerca prima nella directory di lavoro, quindi nel percorso specificato nella variabile di ambiente LIB.  
  
```  
#pragma comment( lib, "emapi" )  
```  
  
 Il pragma seguente indica al compilatore di inserire il nome e il numero di versione del compilatore nel file oggetto:  
  
```  
#pragma comment( compiler )  
```  
  
> [!NOTE]
>  Per i commenti che accettano un parametro `commentstring`, è possibile utilizzare una macro in qualsiasi punto in cui si utilizzerebbe un valore letterale stringa purché la macro si espanda a un valore letterale stringa. È inoltre possibile concatenare qualsiasi combinazione di valori letterali stringa e di macro che si espandono a valori letterali stringa. L'istruzione seguente è ad esempio accettabile:  
  
```  
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)