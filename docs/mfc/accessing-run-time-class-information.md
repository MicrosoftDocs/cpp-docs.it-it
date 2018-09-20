---
title: Accesso alle informazioni sulle classi di runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CObject class [MFC], and RTTI
- CObject class [MFC], using IsKindOf method [MFC]
- run time [MFC], class information
- RUNTIME_CLASS macro [MFC]
- CObject class [MFC], using RUNTIME_CLASS macro [MFC]
- RTTI compiler option [MFC]
- CObject class [MFC], accessing run-time class information
- run time [MFC]
- IsKindOf method method [MFC]
- run-time class [MFC], accessing information
- classes [MFC], run-time class information
- run-time class [MFC]
- RUNTIME_CLASS macro, using
ms.assetid: 3445a9af-0bd6-4496-95c3-aa59b964570b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b92f634e120bf40fe2355a4c09e0e0fb68e9ec2c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407451"
---
# <a name="accessing-run-time-class-information"></a>Accesso alle informazioni sulle classi di runtime

In questo articolo viene illustrato come accedere alle informazioni sulla classe di un oggetto in fase di esecuzione.

> [!NOTE]
>  MFC non utilizza il [Run-Time Type Information](../cpp/run-time-type-information.md) supporto (RTTI) introdotto in Visual C++ 4.0.

Se è stata derivata la classe da [CObject](../mfc/reference/cobject-class.md) e usato la **DECLARE**_**dinamica** e `IMPLEMENT_DYNAMIC`, la `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro descritte nell'articolo [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md), il `CObject` classe è in grado di determinare la classe esatta di un oggetto in fase di esecuzione.

Questa capacità è molto utile quando è necessario un controllo di tipo aggiuntivo degli argomenti di funzione e quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Tuttavia questa operazione in genere non è consigliata in quanto duplica la funzionalità delle funzioni virtuali.

La funzione membro `CObject` di `IsKindOf` può essere utilizzata per determinare se un particolare oggetto appartiene a una classe specificata o se è derivato da una classe specifica. L'argomento per `IsKindOf` è un oggetto `CRuntimeClass`, che è possibile ottenere utilizzando la macro `RUNTIME_CLASS` con il nome della classe.

### <a name="to-use-the-runtimeclass-macro"></a>Per utilizzare la macro RUNTIME_CLASS

1. Utilizzare `RUNTIME_CLASS` con il nome della classe, come illustrato di seguito per la classe `CObject`:

     [!code-cpp[NVC_MFCCObjectSample#4](../mfc/codesnippet/cpp/accessing-run-time-class-information_1.cpp)]

Raramente sarà necessario accedere direttamente all'oggetto della classe di runtime. Un altro utilizzo comune consiste nel passare l'oggetto della classe di runtime alla funzione `IsKindOf`, come illustrato nella procedura seguente. La funzione `IsKindOf` esegue dei test su un oggetto per vedere se appartiene a una determinata classe.

#### <a name="to-use-the-iskindof-function"></a>Per utilizzare la funzione IsKindOf

1. Assicurarsi che la classe disponga di supporto alle classi di runtime. Vale a dire, la classe deve avere stato derivata direttamente o indirettamente da `CObject` e usato la **DECLARE**_**dinamico** e `IMPLEMENT_DYNAMIC`, il `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro descritte nell'articolo [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).

1. Chiamare la funzione membro `IsKindOf` per gli oggetti della classe, utilizzando la macro `RUNTIME_CLASS` per generare l'argomento `CRuntimeClass`, come illustrato di seguito:

     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/accessing-run-time-class-information_2.h)]

     [!code-cpp[NVC_MFCCObjectSample#5](../mfc/codesnippet/cpp/accessing-run-time-class-information_3.cpp)]

    > [!NOTE]
    >  IsKindOf restituisce **TRUE** se l'oggetto è un membro della classe specificata o di una classe derivata dalla classe specificata. `IsKindOf` non supporta l'ereditarietà multipla o le classi base virtuali, sebbene, se necessario, sia possibile utilizzare l'ereditarietà multipla per le classi derivate di Microsoft Foundation.

Un utilizzo delle informazioni sulla classe di runtime è la creazione dinamica di oggetti. Questo processo è descritto nell'articolo [la creazione di oggetti dinamici](../mfc/dynamic-object-creation.md).

Per ulteriori informazioni sulla serializzazione e informazioni sulle classi di runtime, vedere gli articoli [file in MFC](../mfc/files-in-mfc.md) e [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Uso di CObject](../mfc/using-cobject.md)

