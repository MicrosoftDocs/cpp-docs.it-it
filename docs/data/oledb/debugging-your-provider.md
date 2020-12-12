---
description: 'Altre informazioni su: debug del provider'
title: Debug del provider
ms.date: 10/29/2018
helpviewer_keywords:
- debugging [C++], providers
- OLE DB providers, debugging
- Visual C++ debugger, debugging providers
- Visual C++ debugger
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
ms.openlocfilehash: 9a178bfa55f8efeb11a3265ab8aa14a5418d7516
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287580"
---
# <a name="debugging-your-provider"></a>Debug del provider

Esistono due modi per eseguire il debug del provider:

- Poiché i provider vengono creati in corso, è possibile creare un codice consumer usando i modelli di consumer OLE DB ed eseguire l'istruzione nel provider normalmente.

- È possibile utilizzare diverse utilità disponibili con Visual C++.

## <a name="to-use-debugging"></a>Per utilizzare il debug

1. Aprire il progetto del provider.

1. Scegliere **Proprietà** dal menu **progetti** .

1. Nella finestra di dialogo **pagine delle proprietà** fare clic sulla scheda **debug** .

1. Selezionare le opzioni desiderate, quindi fare clic su **OK**.

1. Impostare i punti di interruzione, quindi eseguire il debug come di consueto.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
