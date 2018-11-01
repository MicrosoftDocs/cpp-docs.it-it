---
title: Modifica delle proprietà di una risorsa di tipo stringa (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- resource identifiers, string properties
- string tables [C++], changing strings
- strings [C++], properties
ms.assetid: 0a220434-f444-4405-9a64-d28d6b965687
ms.openlocfilehash: efa5f690b18c223c60a68071b335a881633845d5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450986"
---
# <a name="changing-the-properties-of-a-string-resource-c"></a>Modifica delle proprietà di una risorsa di tipo stringa (C++)

### <a name="to-change-a-string-or-its-identifier"></a>Modificare il relativo identificatore o una stringa

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare la stringa di cui si desidera modificare e fare doppio clic il **ID**, **valore**, o **didascalia** colonna. È ora possibile:

   - Selezionare un **ID** dalle **elenco a discesa ID** elenco o digitare un `ID` direttamente sul posto.

   - Digitare un numero diverso nel **valore** colonna.

   - Digitare le modifiche apportate nel **didascalia** colonna.

        > [!NOTE]
        >  È anche possibile modificare le proprietà della stringa nel [finestra proprietà](/visualstudio/ide/reference/properties-window).

Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor stringhe](../windows/string-editor.md)