---
description: 'Altre informazioni su: relazione tra un oggetto finestra C++ e un HWND'
title: Relazione tra un oggetto finestra C++ e HWND
ms.date: 11/19/2018
f1_keywords:
- HWND
helpviewer_keywords:
- Windows window [MFC]
- window objects [MFC], HWND and
- HWND [MFC]
- CWnd class [MFC], HWND
- HWND, window objects [MFC]
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
ms.openlocfilehash: bdcf52d2890265b854e3eef7854b489b47eda6a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218095"
---
# <a name="relationship-between-a-c-window-object-and-an-hwnd"></a>Relazione tra un oggetto finestra C++ e HWND

L' *oggetto* finestra è un oggetto della classe C++ `CWnd` , o di una classe derivata, creato direttamente dal programma. Viene e passa in risposta alle chiamate al costruttore e al distruttore del programma. La *finestra* di Windows, d'altra parte, è un handle opaco per una struttura di dati interna di Windows che corrisponde a una finestra e utilizza le risorse di sistema, se presenti. Una finestra di Windows viene identificata da un handle di finestra ( `HWND` ) e viene creata dopo che l' `CWnd` oggetto è stato creato da una chiamata alla `Create` funzione membro della classe `CWnd` . La finestra può essere distrutta da una chiamata al programma o da un'azione dell'utente. L'handle della finestra viene archiviato nella variabile membro *m_hWnd* dell'oggetto finestra. Nella figura seguente viene illustrata la relazione tra l'oggetto finestra C++ e la finestra di Windows. La creazione di Windows è illustrata in [creazione di Windows](../mfc/creating-windows.md). L'eliminazione definitiva di Windows è illustrata in [distruzione di oggetti finestra](../mfc/destroying-window-objects.md).

![Oggetto finestra CWnd e finestra risultante](../mfc/media/vc37fj1.gif "Oggetto finestra CWnd e finestra risultante") <br/>
Oggetto finestra e finestra di Windows

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](../mfc/window-objects.md)
