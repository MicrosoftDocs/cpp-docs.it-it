---
title: Supporto MFC nei progetti ATL
ms.date: 11/04/2016
f1_keywords:
- vc.atl.addmfc
helpviewer_keywords:
- ATL projects, MFC support
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
ms.openlocfilehash: 0aece6805f1de987b0164f405e50b99fd706fef4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62275425"
---
# <a name="mfc-support-in-atl-projects"></a>Supporto MFC nei progetti ATL

Se si seleziona **supporto MFC** nella creazione guidata progetto ATL, il progetto dichiara l'applicazione come un oggetto di applicazione MFC (classe). Il progetto consente di inizializzare la libreria MFC e crea un'istanza di una classe (classe *ProjName*) che è derivato da [CWinApp](../../mfc/reference/cwinapp-class.md).

Questa opzione è disponibile per il solo progetti DLL ATL senza attributi.

```
class CProjNameApp : public CWinApp
{
public:

// Overrides
    virtual BOOL InitInstance();
virtual int ExitInstance();
DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CProjNameApp, CWinApp)
END_MESSAGE_MAP()

CProjNameApp theApp;

BOOL CProjNameApp::InitInstance()
{
    return CWinApp::InitInstance();

}

int CProjNameApp::ExitInstance()
{
    return CWinApp::ExitInstance();

}
```

È possibile visualizzare la classe di oggetti applicazione e il relativo `InitInstance` e `ExitInstance` funzioni in visualizzazione classi.

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
