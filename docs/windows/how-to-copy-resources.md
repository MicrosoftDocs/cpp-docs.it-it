---
title: 'Procedura: Gestire le risorse (C++)'
ms.date: 02/14/2019
f1_keywords:
- vc.resvw.resource.copying
- vs.resvw.resource.copying
- vc.resvw.resource.changing
- vb.xmldesigner.data
- vs.resvw.resource.importing
- vc.resvw.resource.importing
helpviewer_keywords:
- resources [C++], moving between files
- resources [C++], copying
- resource files [C++], copying or moving resources between
- resource files [C++], tiling
- .rc files [C++], copying resources between
- rc files [C++], copying resources between
- Language property [C++]
- .resx files [C++], editing
- resource files [C++], editing
- resx files [C++], editing
- resources [C++], exporting
- graphics [C++], exporting
- graphics [C++], importing
- resources [C++], importing
- bitmaps [C++], importing and exporting
- toolbars [C++], importing
- images [C++], importing
- toolbars [C++], exporting
- cursors [C++], importing and exporting
- images [C++], exporting
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
ms.openlocfilehash: 1f176b3fa19374b402039ecca60e690ade5c0cef
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320627"
---
# <a name="how-to-manage-resources-c"></a>Procedura: Gestire le risorse (C++)

## <a name="copy-resources"></a>Copiare le risorse

È possibile copiare le risorse da un file a un altro senza modificarle oppure è possibile modificare la lingua o condizione di una risorsa durante la copia.

È possibile copiare facilmente le risorse da una risorsa esistente o un file eseguibile al file di risorse corrente. Per copiare le risorse, aprire entrambi i file che contiene risorse nello stesso momento e trascinare elementi da un file a un altro oppure copiare e incollare tra i due file. Questo metodo funziona per i file di script (RC) delle risorse e i file di modello (con estensione rct) delle risorse e come file eseguibile (.exe).

> [!NOTE]
> Visual C++ include file di risorse di esempio che è possibile usare nell'applicazione. Per altre informazioni, vedere [CLIPART: Risorse comuni](https://github.com/Microsoft/VCSamples).

È possibile utilizzare il metodo di trascinamento e rilascio tra i file con estensione RC aperti [all'esterno del progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

### <a name="to-copy-resources-between-files-using-the-drag-and-drop-method"></a>Copiare le risorse tra i file usando il metodo di trascinamento e rilascio

1. Aprire entrambi i file (per altre informazioni, vedere [visualizzare le risorse in un file RC all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio, aprire *Origine1.rc* e *Origine2.rc*.

1. All'interno del primo file RC, selezionare la risorsa da copiare. Ad esempio, nella *Origine1.rc*, selezionare **IDD_DIALOG1**.

1. Tenere premuto il **Ctrl** della chiave e trascinare la risorsa per il secondo file RC. Ad esempio, trascinare **IDD_DIALOG1** dalla *Origine1.rc* al *Origine2.rc*.

   > [!NOTE]
   > La risorsa di trascinamento senza tenere premuto il **Ctrl** chiave consente di spostare la risorsa anziché copiarlo.

### <a name="to-copy-resources-using-copy-and-paste"></a>Per copiare le risorse tramite copia e Incolla

1. Aprire entrambi i file (per altre informazioni, vedere [visualizzare le risorse in un file RC all'esterno di un progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio, *Origine1.rc* e *Origine2.rc*.

1. Nel file di origine da cui si vuole copiare una risorsa (ad esempio, *Origine1.rc*), fare doppio clic su una risorsa e scegliere **copia** dal menu di scelta rapida.

1. Fare clic sul file di risorse in cui si vuole incollare la risorsa (ad esempio, *Origine2.rc*). Scegli **Incolla** dal menu di scelta rapida.

   > [!NOTE]
   > È possibile trascinare, copiare, tagliare, oppure Incolla tra i file di risorse nel progetto (**visualizzazione risorse**) e i file RC autonomo (quelli aperti in finestre di documento). È possibile farlo nelle versioni precedenti del prodotto.

   > [!NOTE]
   > Per evitare conflitti con i valori nel file esistente o i nomi dei simboli, Visual C++ potrebbe modificare il valore di simbolo della risorsa trasferita o il nome e valore quando copiate nel nuovo file.

### <a name="change-the-language-or-condition-of-a-resource-while-copying"></a>Modificare la lingua o condizione di una risorsa durante la copia

Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.

- La lingua della risorsa identifica semplicemente la lingua relativa alla risorsa, Viene usata la lingua dal [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea) per consentire di identificare la risorsa per cui si sta cercando. (Tuttavia, le risorse possono presentare differenze per ogni lingua che non sono correlate al testo, ad esempio, tasti di scelta rapida funzionanti solo su una tastiera giapponese o una bitmap che sarebbe solo appropriata per lingua cinese compilazioni)

- La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.

La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nel **dell'area di lavoro** finestra. In questo esempio, la risorsa denominata `IDD_AboutBox` viene usando `Finnish` come linguaggio e le relative condizioni viene `XX33`.

```cpp
IDD_AboutBox (Finnish - XX33)
```

#### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione

1. Nel file RC o nella [visualizzazione risorse](../windows/resource-view-window.md) finestra, fare doppio clic la risorsa a cui si desidera copiare.

1. Scegli **Inserisci copia** dal menu di scelta rapida e impostare il seguente:

   - Per il **linguaggio** elenco a discesa, selezionare la lingua.

   - Nel **condizione** , digitare la condizione.

## <a name="edit-resources"></a>Modificare le risorse

File di risorse gestite (con estensione resx) sono file XML. Quando si aggiunge un file di risorse gestito per il progetto dal **Aggiungi nuovo elemento** finestra di dialogo, il **Editor risorse gestite** apre per impostazione predefinita.

## <a name="import-and-export-resources"></a>Importazione / esportazione di risorse

È possibile importare risorse grafiche (bitmap, icone, cursori e barre degli strumenti), file HTML e risorse personalizzate da usare in Visual C++. È inoltre possibile esportare gli stessi tipi di file da un progetto Visual C++ in file separati utilizzabili all'esterno dell'ambiente di sviluppo.

> [!NOTE]
> Non è possibile importare o esportare tipi di risorse, quali acceleratori, finestre di dialogo e tabelle di stringhe, poiché non si tratta di tipi di file autonomi.

### <a name="to-import-an-individual-resource-into-your-current-resource-file"></a>Per importare una singola risorsa nel file di risorse corrente

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), pulsante destro del mouse il nodo per lo script di risorsa (* RC) file in cui si desidera aggiungere una risorsa.

1. Selezionare **importazione** menu di scelta rapida.

1. Individuare e selezionare il nome di file della bitmap (BMP), dell'icona (ICO), del cursore (CUR), del file HTML (HTM) o di un file di altro tipo da importare.

1. Scegli **OK** per aggiungere la risorsa per il file selezionato in **risorsa** visualizzazione.

   > [!NOTE]
   > Il processo di importazione viene eseguito nello stesso modo indipendentemente dal tipo di risorsa specifico selezionato. La risorsa importata viene aggiunta automaticamente al nodo appropriato per tale tipo di risorsa.

### <a name="to-export-a-bitmap-icon-or-cursor-as-a-separate-file-for-use-outside-of-visual-c"></a>Per esportare una bitmap, un'icona o un cursore come file separato, utilizzabile all'esterno di Visual C++

1. Nelle **risorsa** visualizzare, fare doppio clic la risorsa da esportare.

1. Selezionare **esportare** menu di scelta rapida e accettare il nome del file corrente o digitarne uno nuovo.

1. Passare alla cartella in cui si desidera salvare il file e scegliere **esportare**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Creare le risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Includere le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)<br/>