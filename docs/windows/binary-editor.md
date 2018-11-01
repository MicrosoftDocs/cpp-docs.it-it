---
title: Editor binario (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.binary.F1
helpviewer_keywords:
- editors, Binary
- resources [C++], editing
- resource editors [C++], Binary editor
- Binary editor
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
ms.openlocfilehash: 1b5e1c16ff63c55617ee9b2bbcb47a7201635789
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50451701"
---
# <a name="binary-editor-c"></a>Editor binario (C++)

> [!WARNING]
> Il **Editor binario** non è disponibile nelle edizioni Express.

L'editor binario consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](/visualstudio/ide/reference/find-command) per cercare le stringhe ASCII o i byte esadecimali. È consigliabile usare la **binario** editor solo quando è necessario visualizzare o apportare secondaria viene modificato per le risorse personalizzate o tipi di risorse non è supportati dall'ambiente di Visual Studio.

Per aprire la **Editor binario**, in primo luogo scegliere **File** > **nuovo** > **File** dal menu principale, selezionare il file che si desidera modificare, quindi fare clic sulla freccia accanto al **aperto** e scegliere **aperta con** > **Editor binario**.

> [!CAUTION]
> La modifica di risorse come le finestre di dialogo, le immagini o i menu nell'editor binario è rischiosa. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.

> [!TIP]
> Quando si usa la **binario** editor, in molti casi, è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Ad esempio, se si fa clic mentre si punta al **binario** Mostra il menu di scelta rapida editor con i valori esadecimali selezionati, il **Taglia**, **copia**, e **Incolla**  comandi.

Con il **binario** editor, è possibile:

- [Aprire una risorsa per la modifica binaria](../windows/opening-a-resource-for-binary-editing.md)

- [Modificare i dati binari](../windows/editing-binary-data.md)

- [Trovare i dati binari](../windows/finding-binary-data.md)

- [Creare una nuova risorsa personalizzata o di dati](../windows/creating-a-new-custom-or-data-resource.md)

## <a name="managed-resources"></a>Risorse gestite

È possibile usare la [editor di immagini](../windows/image-editor-for-icons.md) e il **binario** editor per lavorare con file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)