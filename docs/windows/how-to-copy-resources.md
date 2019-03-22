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
ms.openlocfilehash: 9867fdf260750d47421e699cdd0d7a58b02ce947
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328623"
---
# <a name="how-to-manage-resources-c"></a>Procedura: Gestire le risorse (C++)

## <a name="copy-and-edit-resources"></a>Copia e modifica risorse

È possibile copiare le risorse da un file a un altro senza modificarle oppure modificare la lingua o condizione di una risorsa durante la copia.

È possibile copiare facilmente le risorse da una risorsa esistente o un file eseguibile al file di risorse corrente. Per copiare le risorse, aprire entrambi i file che contiene risorse nello stesso momento e trascinare elementi da un file a un altro oppure copiare e incollare tra i due file. Questo metodo funziona per i file di script (RC) delle risorse e i file di modello (con estensione rct) delle risorse e come file eseguibile (.exe).

> [!NOTE]
> Visual C++ include file di risorse di esempio che è possibile usare nell'applicazione. Per altre informazioni, vedere [CLIPART: Risorse comuni](https://github.com/Microsoft/VCSamples).

È non è possibile trascinare, copiare, tagliare, oppure Incolla tra i file di risorse nel progetto (**visualizzazione risorse**) e aprire i file RC autonomo in finestre dei documenti. È possibile farlo nelle versioni precedenti del prodotto. Usare solo il metodo di trascinamento e rilascio tra i file con estensione RC sono aperti all'esterno del progetto.

### <a name="to-copy-resources"></a>Per copiare risorse

1. Aprire entrambi i file di risorsa in modo autonomo. (Vedere [usano i file di script di risorsa](how-to-create-a-resource-script-file.md#use-resource-script-files)). Ad esempio, aprire *Origine1.rc* e *Origine2.rc*.

1. All'interno del primo file RC, ovvero:

   - Usare il metodo di trascinamento e rilascio

      1. Selezionare la risorsa da copiare. Ad esempio, nella *Origine1.rc*, selezionare **IDD_DIALOG1**.

      1. Tenere premuto il **Ctrl** della chiave e trascinare la risorsa per il secondo file RC. Ad esempio, trascinare **IDD_DIALOG1** dalla *Origine1.rc* al *Origine2.rc*.

         > [!TIP]
         > La risorsa di trascinamento senza tenere premuto il **Ctrl** chiave consente di spostare la risorsa anziché copiarlo.

   - Usare la copia e Incolla (metodo)

      1. La risorsa destro all'utente per copiare (ad esempio, *Origine1.rc*) e scegliere **copia**.

      1. Fare clic sul file di risorse in cui si vuole incollare la risorsa (ad esempio, *Origine2.rc*) e scegliere **incollare**.

> [!NOTE]
> Per evitare conflitti con i valori nel file esistente o i nomi dei simboli, Visual C++ potrebbe modificare il valore di simbolo della risorsa trasferita o il nome e valore quando copiate nel nuovo file.

Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.

- La lingua di una risorsa specifica la lingua utilizzata da [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea) per consentire di identificare la risorsa per cui si sta cercando. Le risorse possono presentare differenze per ogni lingua che non sono correlate al testo, ad esempio, tasti di scelta rapida funzionanti solo su una tastiera giapponese o una bitmap che sarebbe solo appropriata per lingua cinese compilazioni.

- La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.

La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nel **dell'area di lavoro** finestra. In questo caso la risorsa denominata `IDD_AboutBox` viene usando `Finnish` come linguaggio e le relative condizioni viene `XX33`:

```cpp
IDD_AboutBox (Finnish - XX33)
```

### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione

Nel *RC* file o nel [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) finestra, la risorsa a cui si desidera copiare e scegliere destro **Inserisci copia**. Quindi impostare quanto segue:

- Per il **linguaggio** elenco a discesa, selezionare la lingua.

- Nel **condizione** , digitare la condizione.

### <a name="to-edit-resources"></a>Per modificare le risorse

File di risorse gestite (con estensione resx) sono file XML. Quando si aggiunge un file di risorse gestito per il progetto dal **Aggiungi nuovo elemento** finestra di dialogo, il **Editor risorse gestite** apre per impostazione predefinita.

## <a name="import-and-export-resources"></a>Importazione / esportazione di risorse

È possibile importare risorse grafiche (bitmap, icone, cursori e barre degli strumenti), file HTML e risorse personalizzate da usare in Visual C++. È inoltre possibile esportare gli stessi tipi di file da un progetto Visual C++ in file separati utilizzabili all'esterno dell'ambiente di sviluppo.

> [!NOTE]
> Tipi di risorse, ad esempio gli acceleratori, finestre di dialogo e le tabelle di stringhe non possono essere importati o esportati perché non si tratta di tipi di file autonomi.

### <a name="to-import-a-resource-into-the-resource-script-file"></a>Per importare una risorsa nel file di script della risorsa

1. Nelle [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources) pulsante destro del mouse il nodo del file di script (RC) di risorse a cui si desidera aggiungere una risorsa e selezionare **importazione**.

1. Individuare e scegliere il nome del file di icona (ico), la bitmap (bmp), cursore (cur), file html (htm) o altri file da importare.

1. Selezionare **OK** per aggiungere la risorsa per il file di script di risorsa.

> [!NOTE]
> Il processo di importazione funziona allo stesso non questione tipo di risorsa a cui è stato selezionato. La risorsa importata viene aggiunto automaticamente al nodo appropriato di quel tipo di risorsa.

### <a name="to-export-a-resource-for-use-outside-of-visual-c"></a>Per esportare una risorsa per l'utilizzo di fuori di Visual C++

1. Nelle [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources), fare doppio clic la risorsa che si desidera esportare e scegliere **esportare**. È possibile accettare il nome del file corrente o digitarne uno nuovo.

1. Passare alla cartella in cui si desidera salvare il file e selezionare **esportare**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: Crea risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Procedura: Includere risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)<br/>