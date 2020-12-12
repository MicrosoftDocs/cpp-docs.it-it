---
description: 'Ulteriori informazioni su: impostazioni applicazione, creazione guidata DLL MFC'
title: Impostazioni applicazione, Creazione guidata DLL MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.dll.appset
helpviewer_keywords:
- MFC DLL Wizard, application settings
ms.assetid: 0a96b94f-ae36-4975-951b-c9ffb3def21c
ms.openlocfilehash: da9579ef9a834fa0c2362b1569c2efa808132faa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322798"
---
# <a name="application-settings-mfc-dll-wizard"></a>Impostazioni applicazione, Creazione guidata DLL MFC

Utilizzare questa pagina della creazione guidata DLL MFC per progettare e aggiungere funzionalità di base a un nuovo progetto DLL MFC.

## <a name="dll-type"></a>Tipo di DLL

Selezionare il tipo di DLL che si desidera creare.

- **DLL MFC normale che usa la DLL MFC condivisa**

   Selezionare questa opzione per collegare la libreria MFC al programma come DLL condivisa. Utilizzando questa opzione, non è possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante. Il programma effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti di memoria e disco del programma se è costituito da più file di esecuzione che utilizzano la libreria MFC. I programmi Win32 e MFC possono chiamare funzioni nella DLL. È necessario ridistribuire la DLL MFC con questo tipo di progetto.

- **Normale DLL MFC con MFC collegato in modo statico**

   Selezionare questa opzione per collegare il programma in modo statico alla libreria MFC in fase di compilazione. I programmi Win32 e MFC possono chiamare funzioni nella DLL. Sebbene questa opzione aumenti le dimensioni del programma, non è necessario ridistribuire la DLL MFC con questo tipo di progetto. Non è possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante.

- **DLL estensione MFC**

   Selezionare questa opzione se si desidera che il programma effettui chiamate alla libreria MFC in fase di esecuzione e se si desidera condividere oggetti MFC tra la DLL e l'applicazione chiamante. Questa opzione consente di ridurre i requisiti di memoria e disco del programma, se è costituito da più file eseguibili che utilizzano tutti la libreria MFC. Solo i programmi MFC possono chiamare funzioni nella DLL. È necessario ridistribuire la DLL MFC con questo tipo di progetto.

## <a name="additional-features"></a>Funzionalità aggiuntive

Consente di indicare se la DLL MFC deve supportare l'automazione e se deve supportare Windows Sockets.

- **Automazione**

   Selezionare **automazione** per consentire al programma di modificare gli oggetti implementati in un altro programma. Selezionando **automazione** viene inoltre esposto il programma ad altri client di automazione. Per ulteriori informazioni, vedere [automazione](../../mfc/automation.md) .

- **Windows Sockets**

   Selezionare questa opzione per indicare che il programma supporta Windows Sockets. Windows Sockets consente di scrivere programmi che comunicano su reti TCP/IP.

   Quando viene creata la DLL MFC con supporto per Windows Sockets, [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) Inizializza il supporto per i socket e il file di intestazione MFC StdAfx. h include afxsock. h.

## <a name="see-also"></a>Vedi anche

[Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)<br/>
[Creazione di un progetto DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)
