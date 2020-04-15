---
title: 'TN023: risorse MFC standard'
ms.date: 11/04/2016
helpviewer_keywords:
- resources [MFC]
- TN023
- standard resources
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
ms.openlocfilehash: 90e7b9b7c354ba919c3dee279725b4498bea57ff
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370375"
---
# <a name="tn023-standard-mfc-resources"></a>TN023: risorse MFC standard

In questa nota vengono descritte le risorse standard fornite e necessarie per la libreria MFC.

## <a name="standard-resources"></a>Risorse standard

MFC offre due categorie di risorse predefinite che è possibile utilizzare nell'applicazione: risorse ClipArt e risorse del framework standard.

Le risorse ClipArt sono risorse aggiuntive da cui il framework non dipende, ma che è possibile aggiungere all'interfaccia utente dell'applicazione. Le seguenti risorse ClipArt sono contenute nell'esempio [CLIPART](../overview/visual-cpp-samples.md)generale MFC :

- Common.rc: un singolo file di risorse che contiene:

  - Un'ampia raccolta di icone che rappresentano una varietà di attività aziendali e di elaborazione dati.

  - Diversi cursori comuni (vedere anche Afxres.rc).

  - Una bitmap della barra degli strumenti che contiene diversi pulsanti della barra degli strumenti.

  - Le risorse bitmap e icona utilizzate da Commdlg.dll.

- Indica.rc: contiene risorse stringa per gli indicatori di stato della barra di stato, ad esempio "CAP" per BLOC MAIUSC.

- Prompts.rc: contiene risorse stringa di prompt di menu per ogni comando predefinito, ad esempio "Creare un nuovo documento" per ID_FILE_NEW.

- Commdlg.rc: un file RC compatibile con Visual C.

Le risorse del framework standard sono risorse con ID definiti da AFX da cui dipende il framework per le implementazioni interne. Raramente è necessario modificare queste risorse definite da AFX. In tal caso, è necessario seguire la procedura descritta più avanti in questo argomento.

Le seguenti risorse del framework sono contenute nella directory MFC-INCLUDE:

- Afxres.rc: risorse comuni utilizzate dal framework.

- Afxprint.rc: risorse specifiche per la stampa.

- Afxolecl.rc: risorse specifiche per le applicazioni client OLE.

- Afxolev.rc: risorse specifiche per le applicazioni server OLE complete.

## <a name="using-clip-art-resources"></a>Utilizzo delle risorse ClipArt

#### <a name="to-use-a-clip-art-binary-resource"></a>Per utilizzare una risorsa binaria ClipArt

1. Aprire il file di risorse dell'applicazione in Visual C.

1. Aprire Common.rc. Questo file contiene tutte le risorse clipart binarie. Questa operazione potrebbe richiedere del tempo perché il file Common.rc viene compilato.

1. Tenere premuto CTRL mentre si trascinano le risorse che si desidera utilizzare da Common.rc al file di risorse dell'applicazione.

Per utilizzare altre risorse ClipArt, seguire la stessa procedura. L'unica differenza è che si aprirà il file RC appropriato anziché Common.rc.

> [!NOTE]
> Prestare attenzione a non spostare involontariamente le risorse da Common.rc in modo permanente. Se si tiene premuto CTRL mentre si trascinano le risorse, verrà creata una copia. Se non si tiene premuto CTRL durante il trascinamento, le risorse verranno spostate. Se si teme che sia stato accidentalmente apportato modifiche al file Common.rc, fare clic su "No" quando viene chiesto se salvare le modifiche in Common.rc.

> [!NOTE]
> I file di risorse RC hanno una speciale risorsa TEXTINCLUDE in essi che impedirà di salvare accidentalmente in cima ai file RC standard.

### <a name="customizing-standard-framework-resources"></a>Personalizzazione delle risorse del framework standard

Le risorse del framework standard vengono in genere incluse in un'applicazione usando il comando #include nel file di risorse di un'applicazione. AppWizard genererà un file di risorse. Questo file include le risorse del framework standard appropriate, a seconda delle opzioni di AppWizard selezionate. È possibile esaminare, aggiungere o rimuovere le risorse incluse modificando le direttive in fase di compilazione. A tale scopo, aprire il menu **Risorsa** e selezionare **Imposta inclusioni**. Esaminare l'elemento di modifica "Direttive in fase di compilazione". Ad esempio:

```
#include "afxres.rc"
#include "afxprint.rc"
```

Il caso più comune di personalizzazione delle risorse del framework standard è l'aggiunta o la rimozione di include ulteriori per la stampa, il client OLE e il supporto di Server OLE.

In alcuni rari casi potrebbe essere necessario personalizzare il contenuto delle risorse del framework standard per l'applicazione specifica, non solo aggiungere e rimuovere l'intero file. I passaggi seguenti illustrano come limitare le risorse incluse:

##### <a name="to-customize-the-contents-of-a-standard-resource-file"></a>Per personalizzare il contenuto di un file di risorse standardTo customize the contents of a standard resource file

1. Aprire il file di risorse in Visual C.

1. Utilizzando il comando Inclusioni `#include` set di risorse, rimuovere il per il file RC standard che si desidera personalizzare. Ad esempio, per personalizzare la barra `#include "afxprint.rc"` degli strumenti di anteprima di stampa, rimuovere la linea.

1. Aprire i file di risorse standard appropriati in MFC. Attuo nell'esempio riportato in precedenza in questo argomento, il file appropriato è MFC, Include, Aafxprint.rc

1. Copiare tutte le risorse dal file RC standard al file di risorse dell'applicazione.

1. Modificare la copia delle risorse standard nel file di risorse dell'applicazione.

> [!NOTE]
> Non modificare le risorse direttamente nei file RC standard. In questo modo verranno modificate le risorse disponibili in ogni applicazione, non solo in quella su cui si sta lavorando.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
