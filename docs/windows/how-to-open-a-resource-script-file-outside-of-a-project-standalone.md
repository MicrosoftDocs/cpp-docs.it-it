---
title: "Procedura: aprire un File di Script di risorsa all'esterno di un progetto C++ (Standalone) | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.resource
dev_langs:
- C++
helpviewer_keywords:
- resources [C++], viewing
- rc files [C++], viewing resources
- .rc files [C++], viewing resources
- resource script files [C++], viewing resources
ms.assetid: bc350c60-178d-4c5d-9a7e-6576b0c936e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1e52d78de0026fa4a589877ee0a591da26107fde
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391539"
---
# <a name="how-to-open-a-resource-script-file-outside-of-a-c-project-standalone"></a>Procedura: aprire un File di Script di risorsa all'esterno di un progetto C++ (autonomo)

È possibile visualizzare le risorse in un file RC anche se non è aperto alcun progetto. Il file con estensione RC verrà aperto in una finestra del documento anziché nella [visualizzazione risorse](../windows/resource-view-window.md) finestra (come avviene quando il file è aperto all'interno di un progetto).

> [!NOTE]
> Questa distinzione è importante poiché alcuni comandi sono disponibili solo quando il file viene aperto in modo autonomo, all'esterno di un progetto. Ad esempio, è possibile solo salvare un file in un formato diverso o con un nome diverso quando il file viene aperto all'esterno di un progetto (il **Salva con nome** comando non è disponibile quando un file viene aperto all'interno di un progetto).

### <a name="to-open-an-rc-file-outside-a-project"></a>Per aprire un file RC all'esterno di un progetto

1. Dal **File** menu, scegliere **Open**, quindi fare clic su **File**.

2. Nel **Apri File** finestra di dialogo passare al file di script di risorse si vuole visualizzare, evidenziare il file e fare clic su **Open**.

   > [!NOTE]
   > Se si apre innanzitutto il progetto (**File**, **aprire**, **progetto**), alcuni comandi non saranno disponibili all'utente. Aprire un file "in modo autonomo" significa aprirlo senza caricare il progetto.

Per aprire e visualizzare il file di risorse in formato testo, vedere [modifica di uno Script di risorsa (RC)](../windows/how-to-open-a-resource-script-file-in-text-format.md).

### <a name="to-open-multiple-rc-files-outside-a-project"></a>Per aprire più file RC all'esterno di un progetto

1. Aprire entrambi i file di risorsa in modo autonomo. Ad esempio, aprire `Source1.rc` e `Source2.rc`.

   1. Dal **File** menu, scegliere **Open**, quindi fare clic su **File**.

   2. Nel **Apri File** finestra di dialogo passare per il primo file di script di risorsa che si desidera aprire (`Source1.rc`), evidenziare il file e fare clic su **aprire**.

   3. Ripetere il passaggio precedente per aprire il secondo file RC (`Source2.rc`).

       I file RC verranno quindi aperti in finestre del documento separate.

2. Quando entrambi i file RC sono aperti, affiancare le finestra in modo da visualizzarle contemporaneamente:

   - Dal **finestra** menu, scegliere **nuovo gruppo di schede orizzontali** oppure **nuovo gruppo di schede verticali**.

       \- oppure -

   - Fare doppio clic su uno dei file con estensione RC e scegliere **nuovo gruppo di schede orizzontali** oppure **gruppo di schede verticali** dal menu di scelta rapida.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)