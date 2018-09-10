---
title: Modifica di dati binari (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.binary
dev_langs:
- C++
helpviewer_keywords:
- binary data, editing
- binary data
ms.assetid: 0fd429de-baf1-4871-b5e4-42bf868a3261
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 050f52dface260da77f7290f47a9cbb204caaafe
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315458"
---
# <a name="editing-binary-data"></a>Modifica di dati binari

### <a name="to-edit-a-resource-in-the-binary-editor"></a>Per modificare una risorsa nell'editor binario

1. Selezionare il byte di cui che si desidera modificare.

   Il **della scheda** chiave sposta lo stato attivo tra le sezioni esadecimale e ASCII del **binario** editor. È possibile usare la **PGSU** e **PGGIÙ** tasti per spostarsi tra la risorsa di una schermata alla volta.

2. Digitare il nuovo valore.

   Il valore viene modificato immediatamente in entrambe le sezioni esadecimale e ASCII e lo stato attivo passa al valore nella riga successivo.

   > [!NOTE]
   > Il **binario** editor accetta le modifiche automaticamente quando si chiude l'editor.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Binary Editor](binary-editor.md)