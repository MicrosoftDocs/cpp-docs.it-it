---
title: Modifica dei nomi di file di intestazione simboli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.changing.header
dev_langs:
- C++
helpviewer_keywords:
- resource files [C++], multiple
- Resource Includes dialog box [C++]
- symbol header files [C++], changing names
- symbols [C++], symbol header files
- Resource.h
ms.assetid: b948284a-7899-402e-ab12-9f2c8480ca9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 626fb3a7421414355d98a680d5647a494de26594
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374399"
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