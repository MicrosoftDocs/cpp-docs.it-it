---
title: Creazione di una nuova risorsa personalizzata o dati (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.binary
helpviewer_keywords:
- custom resources [C++]
- data resources [C++]
- resources [C++], creating
ms.assetid: 9918bf96-38fa-43a1-a384-572f95d84950
ms.openlocfilehash: 7b4044921a26e572c53e1a070611c78323d3ca1e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590476"
---
# <a name="creating-a-new-custom-or-data-resource-c"></a>Creazione di una nuova risorsa personalizzata o dati (C++)

È possibile creare una nuova risorsa personalizzata o di dati inserendo tale risorsa in un file separato usando la sintassi dei file di script (RC) di risorsa normale, quindi includendo tale file facendo clic con il progetto in **Esplora soluzioni** e scegliendo  **Inclusioni risorsa** menu di scelta rapida.

### <a name="to-create-a-new-custom-or-data-resource"></a>Per creare una nuova risorsa personalizzata o di dati

1. [Creare un file RC](../windows/how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.

   È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.

2. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul file RC del progetto e scegliere **Inclusioni risorsa** nel menu di scelta rapida.

3. Nel **direttive in fase di compilazione** , digitare un `#include` istruzione che fornisce il nome del file contenente la risorsa personalizzata. Ad esempio:

    ```cpp
    #include mydata.rc
    ```

   Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto della casella **Direttive in fase di compilazione** viene inserito nel file di script della risorsa esattamente nel modo in cui viene digitato.

4. Fare clic su **OK** per registrare le modifiche.

Un altro metodo per creare una risorsa personalizzata consiste nell'importare un file esterno come risorsa personalizzata. Per altre informazioni, vedere [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Binary Editor](binary-editor.md)