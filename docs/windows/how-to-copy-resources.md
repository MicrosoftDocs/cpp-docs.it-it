---
title: 'Procedura: Copiare le risorse (C++)'
ms.date: 11/04/2016
f1_keywords:
- vc.resvw.resource.copying
- vs.resvw.resource.copying
- vc.resvw.resource.changing
helpviewer_keywords:
- resources [C++], moving between files
- resources [C++], copying
- resource files [C++], copying or moving resources between
- resource files [C++], tiling
- .rc files [C++], copying resources between
- rc files [C++], copying resources between
- Language property [C++]
ms.assetid: 65f523e8-017f-4fc6-82d1-083c56d9131f
ms.openlocfilehash: 772c9b905d4cb0c4e2ccab9ec51aa02860b2db32
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55849661"
---
# <a name="how-to-copy-resources-c"></a>Procedura: Copiare le risorse (C++)

È possibile copiare le risorse da un file a un altro senza modificarle oppure è possibile modificare la lingua o condizione di una risorsa durante la copia.

È possibile copiare facilmente le risorse da una risorsa esistente o un file eseguibile al file di risorse corrente. Per copiare le risorse, aprire entrambi i file che contiene risorse nello stesso momento e trascinare elementi da un file a un altro oppure copiare e incollare tra i due file. Questo metodo funziona per i file di script (RC) delle risorse e i file di modello (con estensione rct) delle risorse e come file eseguibile (.exe).

> [!NOTE]
> Visual C++ include file di risorse di esempio che è possibile usare nell'applicazione. Per altre informazioni, vedere [CLIPART: Risorse comuni](https://github.com/Microsoft/VCSamples).

È possibile utilizzare il metodo di trascinamento e rilascio tra i file con estensione RC aperti [all'esterno del progetto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

## <a name="to-copy-resources-between-files-using-the-drag-and-drop-method"></a>Copiare le risorse tra i file usando il metodo di trascinamento e rilascio

1. Aprire entrambi i file (per altre informazioni, vedere [visualizzazione di risorse in un File all'esterno di un progetto con estensione RC](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio, aprire Origine1.rc e Origine2.rc.

1. All'interno del primo file RC, selezionare la risorsa da copiare. Ad esempio, nella `Source1.rc`, selezionare **IDD_DIALOG1**.

1. Tenere premuto il **Ctrl** della chiave e trascinare la risorsa per il secondo file RC. Ad esempio, trascinare **IDD_DIALOG1** dalla `Source1.rc` a `Source2.rc`.

   > [!NOTE]
   > La risorsa di trascinamento senza tenere premuto il **Ctrl** chiave consente di spostare la risorsa anziché copiarlo.

## <a name="to-copy-resources-using-copy-and-paste"></a>Per copiare le risorse tramite copia e Incolla

1. Aprire entrambi i file (per altre informazioni, vedere [visualizzazione di risorse in un File all'esterno di un progetto con estensione RC](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)). Ad esempio, Origine1.rc e Origine2.rc.

1. Nel file di origine da cui si vuole copiare una risorsa (ad esempio, `Source1.rc`), fare doppio clic su una risorsa e scegliere **copia** dal menu di scelta rapida.

1. Fare clic sul file di risorse in cui si vuole incollare la risorsa (ad esempio, `Source2.rc`). Scegli **Incolla** dal menu di scelta rapida.

   > [!NOTE]
   > È possibile trascinare, copiare, tagliare, oppure Incolla tra i file di risorse nel progetto (**visualizzazione risorse**) e i file RC autonomo (quelli aperti in finestre di documento). È possibile farlo nelle versioni precedenti del prodotto.

   > [!NOTE]
   > Per evitare conflitti con i valori nel file esistente o i nomi dei simboli, Visual C++ potrebbe modificare il valore di simbolo della risorsa trasferita o il nome e valore quando copiate nel nuovo file.

## <a name="to-change-the-language-or-condition-of-a-resource-while-copying-c"></a>Per modificare la lingua o condizione di una risorsa durante la copia (C++)

Durante la copia in una risorsa, è possibile modificarne la proprietà relativa alla lingua o alla condizione oppure entrambe.

- La lingua della risorsa identifica semplicemente la lingua relativa alla risorsa, Viene usata la lingua dal [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea) per consentire di identificare la risorsa per cui si sta cercando. (Tuttavia, le risorse possono presentare differenze per ogni lingua che non sono correlate al testo, ad esempio, tasti di scelta rapida funzionanti solo su una tastiera giapponese o una bitmap che sarebbe solo appropriata per lingua cinese compilazioni)

- La condizione di una risorsa è un simbolo definito che identifica una condizione in cui è necessario usare questa particolare copia della risorsa.

La lingua e la condizione di una risorsa vengono visualizzate tra parentesi dopo il nome della risorsa nella finestra Area di lavoro. In questo esempio, la risorsa denominata IDD_AboutBox Usa come lingua il finlandese e la condizione è XX33.

```cpp
IDD_AboutBox (Finnish - XX33)
```

### <a name="to-copy-an-existing-resource-and-change-its-language-or-condition"></a>Per copiare una risorsa esistente e modificarne la lingua e la condizione

1. Nel file RC o nella [visualizzazione risorse](../windows/resource-view-window.md) finestra, fare doppio clic la risorsa a cui si desidera copiare.

1. Scegli **Inserisci copia** dal menu di scelta rapida.

1. Nel **Inserisci copia risorsa** nella finestra di dialogo:

   - Per il **linguaggio** elenco a discesa, selezionare la lingua.

   - Nel **condizione** , digitare la condizione.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
[Procedura: Aprire un file script di risorsa all'esterno di un progetto (file autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)<br/>
