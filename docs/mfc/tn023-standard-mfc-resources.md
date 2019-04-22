---
title: 'TN023: Risorse MFC standard'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.resources
helpviewer_keywords:
- resources [MFC]
- TN023
- standard resources
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
ms.openlocfilehash: d29f0ab2254a52e01f2016f64a37ddfce47955bb
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58780314"
---
# <a name="tn023-standard-mfc-resources"></a>TN023: Risorse MFC standard

In questa nota descrive le risorse standard fornito con e necessari per la libreria MFC.

## <a name="standard-resources"></a>Risorse standard

MFC offre due categorie di risorse predefinite che è possibile usare nell'applicazione: ClipArt risorse e le risorse di framework standard.

Risorse ClipArt sono risorse aggiuntive che il framework non dipende, ma può essere utile da aggiungere all'interfaccia utente dell'applicazione. Nell'esempio MFC generale sono contenute le seguenti risorse ClipArt [CLIPART](../overview/visual-cpp-samples.md):

- Common.rc: Un singolo file di risorse che contiene:

   - Un'ampia raccolta di icone che rappresentano un'ampia gamma di attività di elaborazione dei dati e business.

   - Cursori comuni (vedere anche AFXRES) diversi.

   - Bitmap della barra degli strumenti che contiene diversi pulsanti della barra degli strumenti.

   - Le risorse di bitmap e icone utilizzate dai Commdlg.dll.

- Indicate.rc: Contiene le risorse stringa per gli indicatori di stato chiave barra di stato, ad esempio "Limite di utilizzo" per BLOC.

- Prompts.rc: Contiene le risorse di stringa di richiesta di menu per ogni comando predefinito, ad esempio "Crea un nuovo documento" per ID_FILE_NEW.

- Commdlg.rc: Un file RC compatibile di Visual C++ che contiene i modelli di finestra di dialogo COMMDLG standard.

Le risorse di framework standard sono risorse con ID definiti AFX che dipende dal framework per le implementazioni interne. Raramente occorre modificare queste risorse definite dal AFX. Tal caso, è necessario seguire la procedura descritta più avanti in questo argomento.

Le risorse di framework seguenti sono contenute nella directory MFC\Include.:

- Afxres.rc: Risorse comuni usate dal framework.

- Afxprint.rc: Risorse specifiche per la stampa.

- Afxolecl.rc: Risorse specifiche per le applicazioni client OLE.

- Afxolev.rc: Risorse specifiche delle applicazioni di server completo OLE.

## <a name="using-clip-art-resources"></a>Utilizzo delle risorse ClipArt

#### <a name="to-use-a-clip-art-binary-resource"></a>Usare una risorsa binaria ClipArt

1. Aprire il file di risorse dell'applicazione in Visual C++.

1. Open Common.rc. Questo file contiene tutte le risorse binarie ClipArt. L'operazione potrebbe richiedere alcuni minuti perché il file Common.rc viene compilato.

1. Tenere premuto CTRL mentre si trascinano le risorse che si desidera utilizzare dalla Common.rc per file di risorse dell'applicazione.

Per usare altre risorse ClipArt, seguire la stessa procedura. L'unica differenza è che si aprirà il file RC appropriato anziché Common.rc.

> [!NOTE]
>  Prestare attenzione a non involontariamente spostare le risorse all'esterno di Common.rc in modo permanente. Se si tiene premuto CTRL mentre si trascinano le risorse, si creerà una copia. Se si non premuto CTRL mentre si trascina, sarà possibile spostare le risorse. Se si teme che potrebbero accidentalmente apportate modifiche al file Common.rc, fare clic su "No" quando viene chiesto se si desidera salvare le modifiche apportate a Common.rc.

> [!NOTE]
>  I file di risorse con estensione RC sono una risorsa TEXTINCLUDE speciale che verranno impediscono il salvataggio accidentalmente sopra i file RC standard.

### <a name="customizing-standard-framework-resources"></a>Personalizzazione delle risorse di Framework Standard

Risorse standard del framework vengono in genere inclusi in un'applicazione con il #include comandi nel file di risorse di un'applicazione. La creazione guidata applicazione genererà un file di risorse. Questo file include le risorse di framework standard appropriati, a seconda di quali opzioni di creazione guidata applicazioni selezionate. È possibile rivedere, aggiungere o rimuovere le risorse a cui sono inclusi modificando le direttive in fase di compilazione. A tale scopo, aprire il **Resource** dal menu **inclusioni impostazione**. Esaminare l'elemento di modifica "Direttive in fase di compilazione". Ad esempio:

```
#include "afxres.rc"
#include "afxprint.rc"
```

Il caso più comune di personalizzazione delle risorse di framework standard viene aggiunta o rimozione aggiuntive sono incluse per la stampa, OLE Client e il supporto Server OLE.

In alcuni casi rari che è possibile personalizzare il contenuto delle risorse del framework standard per un'applicazione specifica, non solo aggiungere e rimuovere l'intero file. I passaggi seguenti mostrano come è possibile limitare le risorse che sono incluse:

##### <a name="to-customize-the-contents-of-a-standard-resource-file"></a>Per personalizzare il contenuto di un file di risorse standard

1. Aprire il file di risorse in Visual C++.

1. Usare il comando Inclusioni risorsa, rimuovere il `#include` per il file RC standard che si desidera personalizzare. Ad esempio, per personalizzare la barra degli strumenti dell'anteprima di stampa, rimuovere il `#include "afxprint.rc"` riga.

1. Aprire i file di risorse standard appropriate in MFC\Include. Nell'esempio precedentemente in questo argomento, il file appropriato è MFC\Include\Aafxprint.rc

1. Copiare tutte le risorse dal file con estensione RC standard al file di risorse dell'applicazione.

1. Modificare la copia delle risorse standard nel file di risorse dell'applicazione.

> [!NOTE]
>  Non modificare le risorse direttamente nel file RC standard. Questa operazione modificherà le risorse disponibili in tutte le applicazioni, non solo quello che attualmente in uso.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
