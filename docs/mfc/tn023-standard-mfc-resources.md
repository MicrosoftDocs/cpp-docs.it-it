---
description: 'Altre informazioni su: TN023: risorse MFC standard'
title: 'TN023: risorse MFC standard'
ms.date: 11/04/2016
helpviewer_keywords:
- resources [MFC]
- TN023
- standard resources
ms.assetid: 60af8415-c576-4c2f-a711-ca5da0b9a1f2
ms.openlocfilehash: 8a78a029d67920b7cd711be6200ccced86d243e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215768"
---
# <a name="tn023-standard-mfc-resources"></a>TN023: risorse MFC standard

Questa nota descrive le risorse standard fornite con e necessarie per la libreria MFC.

## <a name="standard-resources"></a>Risorse standard

MFC offre due categorie di risorse predefinite che è possibile usare nell'applicazione: risorse ClipArt e risorse del Framework standard.

Le risorse clipart sono risorse aggiuntive che non dipendono dal Framework, ma che potrebbe essere necessario aggiungere all'interfaccia utente dell'applicazione. Le seguenti risorse clipart sono contenute nella [ClipArt](../overview/visual-cpp-samples.md)di esempio generale MFC:

- Common. RC: un singolo file di risorse che contiene:

  - Ampia raccolta di icone che rappresentano un'ampia gamma di attività di elaborazione dei dati e di business.

  - Diversi cursori comuni (vedere anche Afxres. RC).

  - Bitmap della barra degli strumenti che contiene diversi pulsanti della barra degli strumenti.

  - Le risorse bitmap e Icon utilizzate da Commdlg.dll.

- Indica. RC: contiene le risorse di tipo stringa per gli indicatori di stato delle chiavi della barra di stato, ad esempio "CAP" per il blocco di maiuscole e minuscole.

- Prompts. RC: contiene le risorse stringa del prompt dei menu per ogni comando predefinito, ad esempio "crea un nuovo documento" per ID_FILE_NEW.

- COMMDLG. RC: un file RC compatibile con Visual C++ che contiene i modelli di finestra di dialogo COMMDLG standard.

Le risorse standard del Framework sono risorse con ID definiti da AFX da cui dipende il Framework per le implementazioni interne. Raramente è necessario modificare queste risorse definite da AFX. In tal caso, attenersi alla procedura descritta più avanti in questo argomento.

Le risorse del Framework seguenti sono contenute nella directory MFC\INCLUDE:

- Afxres. RC: risorse comuni usate dal Framework.

- Afxprint. RC: risorse specifiche per la stampa.

- AFXOLECL. RC: risorse specifiche per le applicazioni client OLE.

- Afxolev. RC: risorse specifiche per le applicazioni server OLE complete.

## <a name="using-clip-art-resources"></a>Uso di risorse Clip-Art

#### <a name="to-use-a-clip-art-binary-resource"></a>Per usare una risorsa binaria clipart

1. Aprire il file di risorse dell'applicazione in Visual C++.

1. Aprire Common. RC. Questo file contiene tutte le risorse di ClipArt binarie. Questa operazione può richiedere del tempo perché il file Common. RC viene compilato.

1. Tenere premuto CTRL mentre si trascinano le risorse che si vuole usare da Common. RC al file di risorse dell'applicazione.

Per usare altre risorse clipart, seguire la stessa procedura. L'unica differenza è che verrà aperto il file RC appropriato anziché Common. RC.

> [!NOTE]
> Prestare attenzione a non spostare involontariamente le risorse da Common. RC in modo permanente. Se si tiene premuto il tasto CTRL mentre si trascinano le risorse, si creerà una copia. Se non si tiene premuto CTRL mentre si trascina, le risorse verranno spostate. Se si desidera apportare modifiche accidentali al file RC comune, fare clic su "No" quando viene chiesto se salvare le modifiche in Common. RC.

> [!NOTE]
> Nei file di risorse RC è presente una risorsa TEXTINCLUDE speciale che impedisce di salvare accidentalmente i file RC standard.

### <a name="customizing-standard-framework-resources"></a>Personalizzazione delle risorse standard del Framework

Le risorse standard del Framework vengono in genere incluse in un'applicazione usando il comando #include nel file di risorse di un'applicazione. Creazione guidata applicazioni genererà un file di risorse. Questo file include le risorse del Framework standard appropriate, a seconda delle opzioni di creazione guidata applicazioni selezionate. È possibile esaminare, aggiungere o rimuovere le risorse incluse modificando le direttive in fase di compilazione. A tale scopo, aprire il menu **delle risorse** e selezionare **set includes**. Esaminare l'elemento di modifica delle direttive in fase di compilazione. Ad esempio:

```
#include "afxres.rc"
#include "afxprint.rc"
```

Il caso più comune di personalizzazione delle risorse standard del Framework è l'aggiunta o la rimozione di inclusioni aggiuntive per la stampa, il client OLE e il supporto per server OLE.

In alcuni casi rari è possibile personalizzare il contenuto delle risorse del Framework standard per l'applicazione specifica, non solo aggiungere e rimuovere l'intero file. Nei passaggi seguenti viene illustrato come è possibile limitare le risorse incluse:

##### <a name="to-customize-the-contents-of-a-standard-resource-file"></a>Per personalizzare il contenuto di un file di risorse standard

1. Aprire il file di risorse in Visual C++.

1. Utilizzando il comando Includi set di risorse, rimuovere `#include` per il file RC standard che si desidera personalizzare. Per personalizzare la barra degli strumenti Anteprima di stampa, ad esempio, rimuovere la `#include "afxprint.rc"` riga.

1. Aprire i file di risorse standard appropriati in MFC\INCLUDE. Seguendo l'esempio precedente in questo argomento, il file appropriato è MFC\Include\Aafxprint.rc

1. Copiare tutte le risorse dal file RC standard nel file di risorse dell'applicazione.

1. Modificare la copia delle risorse standard nel file di risorse dell'applicazione.

> [!NOTE]
> Non modificare le risorse direttamente nei file RC standard. Questa operazione modificherà le risorse disponibili in ogni applicazione, non solo in quella attualmente in uso.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
