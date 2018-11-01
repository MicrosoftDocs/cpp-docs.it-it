---
title: Modifica dei nomi nei file di intestazione simboli
ms.date: 11/04/2016
f1_keywords:
- vc.editors.symbol.changing.header
helpviewer_keywords:
- resource files [C++], multiple
- Resource Includes dialog box [C++]
- symbol header files [C++], changing names
- symbols [C++], symbol header files
- Resource.h
ms.assetid: b948284a-7899-402e-ab12-9f2c8480ca9d
ms.openlocfilehash: 4d9aa350d0f680e975c68bf46ac066072df044cb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432334"
---
# <a name="changing-the-names-of-symbol-header-files"></a>Modifica dei nomi nei file di intestazione simboli

In genere tutti i simboli le definizioni vengono salvate in `Resource.h`. Tuttavia, potrebbe essere necessario modificare il nome file di inclusione in modo da poter, ad esempio, usare più file di risorse nella stessa directory.

### <a name="to-change-the-name-of-the-resource-symbol-header-file"></a>Per modificare il nome del file di intestazione simboli di risorsa

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel **file di intestazione simboli** , digitare il nuovo nome per il file di inclusione.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)<br/>
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)