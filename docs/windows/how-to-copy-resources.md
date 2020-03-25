---
title: 'Procedura: gestire le risorse (C++)'
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
ms.openlocfilehash: 0af4e8faeb3d8606fb351b193364a2748fbc944e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80215215"
---
# <a name="how-to-manage-resources-c"></a>Procedura: gestire le risorse (C++)

## <a name="copy-and-edit-resources"></a>Copiare e modificare le risorse

È possibile copiare le risorse da un file a un altro senza modificarle o modificare la lingua o la condizione di una risorsa durante la copia.

È possibile copiare facilmente le risorse da un file eseguibile o da una risorsa esistente nel file di risorse corrente. Per copiare le risorse, si aprono contemporaneamente entrambi i file contenenti risorse e si trascinano gli elementi da un file a un altro oppure si copiano e si incollano tra i due file. Questo metodo funziona per i file di script di risorse (con estensione RC) e i file di modello di risorse (con estensione RCT) e come file eseguibili (exe).

> [!NOTE]
> Visual C++ include i file di risorse di esempio che è possibile usare nella propria applicazione. Per altre informazioni, vedere [ClipArt: risorse comuni](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/general).

Non è possibile trascinare, copiare, tagliare o incollare tra i file di risorse nel progetto (**visualizzazione risorse**) e i file RC autonomi aperti nelle finestre dei documenti. Questa operazione può essere eseguita nelle versioni precedenti del prodotto. Usare solo il metodo di trascinamento della selezione tra i file RC aperti all'esterno del progetto.

### <a name="to-copy-resources"></a>Per copiare le risorse

1. Aprire entrambi i file di risorsa in modo autonomo. (Vedere [usare i file di script di risorsa](how-to-create-a-resource-script-file.md#use-resource-script-files)). Ad esempio, aprire *source1. RC* e *source2. RC*.

1. All'interno del primo file RC, effettuare una delle operazioni seguenti:

   - Usare il metodo di trascinamento della selezione

      1. Selezionare la risorsa che si vuole copiare. Ad esempio, in *source1. RC*selezionare **IDD_DIALOG1**.

      1. Tenere premuto il tasto **CTRL** e trascinare la risorsa nel secondo file RC. Ad esempio, trascinare **IDD_DIALOG1** da *source1. RC* a *source2. RC*.

         > [!TIP]
         > Il trascinamento della risorsa senza tenere premuto il tasto **CTRL** sposta la risorsa anziché copiarla.

   - Usare il metodo Copy e paste

      1. Fare clic con il pulsante destro del mouse sulla risorsa che si desidera copiare (ad esempio, *source1. RC*) e scegliere **copia**.

      1. Fare clic con il pulsante destro del mouse sul file di risorse in cui si vuole incollare la risorsa (ad esempio, *source2. RC*) e scegliere **Incolla**.

> [!NOTE]
> Per evitare conflitti con i nomi o i valori dei simboli nel file esistente C++ , Visual può modificare il valore del simbolo della risorsa trasferita o il nome e il valore del simbolo quando lo si copia nel nuovo file.

Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.

- La lingua di una risorsa specifica la lingua usata da [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea) per identificare la risorsa per cui si sta cercando. Le risorse possono presentare differenze per ogni lingua che non è correlata al testo, ad esempio acceleratori che possono funzionare solo su una tastiera giapponese o su una bitmap appropriata solo per le compilazioni localizzate in cinese.

- La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.

La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nella finestra dell' **area di lavoro** . Qui la risorsa denominata `IDD_AboutBox` USA `Finnish` come lingua e la relativa condizione è `XX33`:

```cpp
IDD_AboutBox (Finnish - XX33)
```

### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione

Nel file *RC* o nella finestra [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) fare clic con il pulsante destro del mouse sulla risorsa che si desidera copiare e scegliere **Inserisci copia**. Impostare quindi quanto segue:

- Per la casella di riepilogo **lingua** selezionare la lingua.

- Digitare la condizione nella casella **condizione** .

### <a name="to-edit-resources"></a>Per modificare le risorse

I file di risorse gestite (resx) sono file XML. Quando si aggiunge un file di risorse gestite al progetto dalla finestra di dialogo **Aggiungi nuovo elemento** , per impostazione predefinita viene aperto l' **Editor risorse gestite** .

## <a name="import-and-export-resources"></a>Importare ed esportare risorse

È possibile importare risorse grafiche (bitmap, icone, cursori e barre degli strumenti), file HTML e risorse personalizzate da usare in Visual C++. È possibile esportare gli stessi tipi di file da un progetto di C++ Visual Studio per separare i file che possono essere usati all'esterno dell'ambiente di sviluppo.

> [!NOTE]
> I tipi di risorse, ad esempio acceleratori, finestre di dialogo e tabelle di stringhe, non possono essere importati o esportati perché non sono tipi di file autonomi.

### <a name="to-import-a-resource-into-the-resource-script-file"></a>Per importare una risorsa nel file di script di risorsa

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) fare clic con il pulsante destro del mouse sul nodo del file di script di risorse (con estensione RC) a cui si desidera aggiungere una risorsa e selezionare **Importa**.

1. Individuare e scegliere il nome file della bitmap (BMP), l'icona (. ico), il cursore (. cur), il file HTML (con estensione htm) o un altro file da importare.

1. Selezionare **OK** per aggiungere la risorsa al file di script di risorsa.

> [!NOTE]
> Il processo di importazione funziona allo stesso modo indipendentemente dal tipo di risorsa selezionato. La risorsa importata viene aggiunta automaticamente al nodo corretto del tipo di risorsa.

### <a name="to-export-a-resource-for-use-outside-of-visual-c"></a>Per esportare una risorsa da usare all'esterno di VisualC++

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sulla risorsa che si desidera esportare e scegliere **Esporta**. È possibile accettare il nome del file corrente o digitarne uno nuovo.

1. Passare alla cartella in cui si vuole salvare il file e selezionare **Esporta**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: creare risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Procedura: Includere risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)
