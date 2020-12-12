---
description: "Altre informazioni su: CWinApp: classe dell'applicazione"
title: 'CWinApp: classe Application'
ms.date: 11/04/2016
helpviewer_keywords:
- application class [MFC]
- CWinApp class [MFC], CWinThread
- MFC, WinMain and
- CWinApp class [MFC], multithreading
- CWinThread class [MFC], and CWinApp
- InitApplication method [MFC]
- WinMain method [MFC]
- WinMain method [MFC], in MFC
- CWinApp class [MFC], WinMain
ms.assetid: 935822bb-d463-481b-a5f6-9719d68ed1d5
ms.openlocfilehash: 63979846ec5b4d5bb5452e98a3ac19474b4fcd0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301633"
---
# <a name="cwinapp-the-application-class"></a>CWinApp: classe Application

La classe principale dell'applicazione in MFC incapsula l'inizializzazione, l'esecuzione e la terminazione di un'applicazione per il sistema operativo Windows. Un'applicazione compilata nel Framework deve avere un solo oggetto di una classe derivata da [CWinApp](reference/cwinapp-class.md). Questo oggetto viene costruito prima della creazione di Windows.

`CWinApp` è derivato da `CWinThread` , che rappresenta il thread principale di esecuzione per l'applicazione, che può avere uno o più thread. Nelle versioni recenti di MFC, le `InitInstance` funzioni membro, **Esegui**, `ExitInstance` e `OnIdle` sono effettivamente nella classe `CWinThread` . Queste funzioni vengono illustrate qui come se fossero `CWinApp` membri, perché la discussione riguarda il ruolo dell'oggetto come oggetto applicazione anziché come thread primario.

> [!NOTE]
> La classe dell'applicazione costituisce il thread principale di esecuzione dell'applicazione. Usando le funzioni dell'API Win32, è anche possibile creare thread secondari di esecuzione. Questi thread possono utilizzare la libreria MFC. Per ulteriori informazioni, vedere [multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Analogamente a qualsiasi programma per il sistema operativo Windows, l'applicazione Framework dispone di una `WinMain` funzione. In un'applicazione Framework, tuttavia, non si scrive `WinMain` . Viene fornito dalla libreria di classi e viene chiamato all'avvio dell'applicazione. `WinMain` esegue servizi standard come la registrazione delle classi di finestre. Chiama quindi le funzioni membro dell'oggetto applicazione per inizializzare ed eseguire l'applicazione. È possibile personalizzare `WinMain` eseguendo l'override delle `CWinApp` funzioni membro che `WinMain` chiamano.

Per inizializzare l'applicazione, `WinMain` chiama le `InitApplication` funzioni membro e dell'oggetto applicazione `InitInstance` . Per eseguire il ciclo di messaggi dell'applicazione, `WinMain` chiama la funzione membro **Run** . Alla chiusura, `WinMain` chiama la funzione membro dell'oggetto applicazione `ExitInstance` .

> [!NOTE]
> I nomi visualizzati in **grassetto** in questa documentazione indicano gli elementi forniti dall'libreria Microsoft Foundation Class e Visual C++. I nomi visualizzati nel `monospaced` tipo indicano gli elementi creati o sottoposte a override.

## <a name="see-also"></a>Vedi anche

[Argomenti MFC generali](general-mfc-topics.md)<br/>
[CWinApp e la creazione guidata applicazione MFC](cwinapp-and-the-mfc-application-wizard.md)<br/>
[Funzioni membro CWinApp sottoponibili a override](overridable-cwinapp-member-functions.md)<br/>
[Servizi CWinApp speciali](special-cwinapp-services.md)
