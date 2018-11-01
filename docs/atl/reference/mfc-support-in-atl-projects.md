---
title: Supporto MFC nei progetti ATL
ms.date: 11/04/2016
f1_keywords:
- vc.atl.addmfc
helpviewer_keywords:
- ATL projects, MFC support
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
ms.openlocfilehash: 21e3305ce2d2968a3809793eb487317e224351f4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50489388"
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

