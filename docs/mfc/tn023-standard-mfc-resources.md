---
title: 'TN023: Risorse MFC Standard | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.resources
dev_langs:
- C++
helpviewer_keywords:
- resources [MFC]
- TN023
- standard resources
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 967485f358d6659d759f2651c80c9390bff0b912
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952037"
---
# <a name="tn023-standard-mfc-resources"></a>TN023: risorse MFC standard
In questa nota descrive le risorse standard fornito con e dalla libreria MFC, è necessario.  
  
## <a name="standard-resources"></a>Risorse standard  
 MFC offre due categorie di risorse predefinite che è possibile utilizzare nell'applicazione in uso: ClipArt risorse e le risorse di framework standard.  
  
 Le risorse ClipArt sono risorse aggiuntive che il framework non dipende da, ma che potrebbero voler aggiungere all'interfaccia utente dell'applicazione. Nell'esempio MFC generale sono contenute le seguenti risorse ClipArt [CLIPART](../visual-cpp-samples.md):  
  
-   Common.rc: Un singolo file di risorse che contiene:  
  
    -   Un'ampia raccolta di icone che rappresentano una gamma di business e l'elaborazione dati.  
  
    -   Più comuni dei cursori (vedere anche AFXRES. rc).  
  
    -   Bitmap della barra degli strumenti che contiene diversi pulsanti della barra degli strumenti.  
  
    -   Le risorse di bitmap e icone utilizzate da Commdlg.dll.  
  
-   Indicate.rc: Contiene le risorse stringa per gli indicatori chiave di stato della barra di stato, ad esempio "Chiusura" per BLOC.  
  
-   Prompts.rc: Contiene le risorse stringa prompt dei comandi di menu per ogni comando predefinito, ad esempio "Crea un nuovo documento" per ID_FILE_NEW.  
  
-   COMMDLG.rc: Un Visual C++ compatibile file RC che contiene i modelli di finestra di dialogo COMMDLG standard.  
  
 Risorse del framework standard sono risorse con ID definiti AFX che dipende dal framework per implementazioni interne. Raramente occorre modificare queste risorse definite AFX. In caso contrario, è necessario seguire la procedura descritta più avanti in questo argomento.  
  
 Le seguenti risorse del framework sono contenute nella directory MFC\Include.:  
  
-   AFXRES. rc: Risorse usate dal framework comuni.  
  
-   Afxprint. rc: Risorse specifiche per la stampa.  
  
-   AFXOLECL.rc: Risorse specifiche per le applicazioni client OLE.  
  
-   Afxolev.rc: Risorse specifiche delle applicazioni di server completo OLE.  
  
## <a name="using-clip-art-resources"></a>Utilizzo delle risorse ClipArt  
  
#### <a name="to-use-a-clip-art-binary-resource"></a>Per utilizzare una risorsa binaria ClipArt  
  
1.  Aprire il file di risorse dell'applicazione in Visual C++.  
  
2.  Aprire Common.rc. Questo file contiene tutte le risorse ClipArt binario. Poiché il file Common.rc viene compilato, l'operazione potrebbe richiedere alcuni minuti.  
  
3.  Tenere premuto CTRL mentre si trascinano le risorse che si desidera utilizzare dalla Common.rc per file di risorse dell'applicazione.  
  
 Per usare altre risorse ClipArt, seguire gli stessi passaggi. L'unica differenza è che si aprirà il file RC appropriato anziché Common.rc.  
  
> [!NOTE]
>  Prestare attenzione a non involontariamente spostare le risorse all'esterno di Common.rc in modo permanente. Se si preme il tasto CTRL mentre si trascinano risorse, verrà creata una copia. Se si non tiene premuto CTRL mentre si trascina, sarà possibile spostare le risorse. Se si teme che potrebbero accidentalmente apportate modifiche al file Common.rc, fare clic su "No" quando viene chiesto se salvare le modifiche su Common.rc.  
  
> [!NOTE]
>  I file di risorse con estensione RC includere una risorsa TEXTINCLUDE speciale, che impediranno accidentalmente il salvataggio sul file RC standard.  
  
### <a name="customizing-standard-framework-resources"></a>Personalizzazione delle risorse del Framework Standard  
 Risorse del framework standard sono in genere incluse in un'applicazione utilizzando il #include comandi nel file di risorse dell'applicazione. La creazione guidata applicazione genererà un file di risorse. Questo file include le risorse del framework standard appropriato, a seconda di quali opzioni di creazione guidata applicazioni selezionate. È possibile rivedere, aggiungere o rimuovere le risorse a cui sono inclusi modificando le direttive in fase di compilazione. A tale scopo, aprire il **Resource** dal menu **inclusioni**. Esaminare l'elemento di modifica "Direttive in fase di compilazione". Ad esempio:  
  
```  
#include "afxres.rc"  
#include "afxprint.rc"  
```  
  
 Il caso più comune di personalizzazione di risorse standard del framework consiste nell'aggiunta o rimozione aggiuntive sono incluse per la stampa, Client OLE e il supporto di Server OLE.  
  
 In alcuni casi rari che si potrebbe voler personalizzare il contenuto delle risorse di framework standard per una particolare applicazione, non solo aggiungere e rimuovere l'intero file. I passaggi seguenti mostrano come è possibile limitare le risorse che sono incluse:  
  
##### <a name="to-customize-the-contents-of-a-standard-resource-file"></a>Per personalizzare il contenuto di un file di risorse standard  
  
1.  Aprire il file di risorse in Visual C++.  
  
2.  Utilizzando il comando Inclusioni risorsa, rimuovere il `#include` per il file RC standard che si desidera personalizzare. Ad esempio, per personalizzare la barra degli strumenti di anteprima di stampa, rimuovere il `#include "afxprint.rc"` riga.  
  
3.  Aprire i file di risorse standard appropriate in MFC\Include. Esempio più indietro in questo argomento, il file appropriato è MFC\Include\Aafxprint.rc  
  
4.  Copiare tutte le risorse nel file RC standard nel file di risorse dell'applicazione.  
  
5.  Modificare la copia delle risorse standard nel file di risorse dell'applicazione.  
  
> [!NOTE]
>  Non modificare le risorse direttamente nel file RC standard. Questa operazione modificherà le risorse disponibili in tutte le applicazioni, non solo in quello che attualmente in uso.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

