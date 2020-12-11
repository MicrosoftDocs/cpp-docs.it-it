---
description: 'Ulteriori informazioni su: supporto MFC nei progetti ATL'
title: Supporto MFC nei progetti ATL
ms.date: 11/04/2016
f1_keywords:
- vc.atl.addmfc
helpviewer_keywords:
- ATL projects, MFC support
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
ms.openlocfilehash: 8614bfdd5320e0ecdf34cc96251fa8a20f2dede9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157919"
---
# <a name="mfc-support-in-atl-projects"></a>Supporto MFC nei progetti ATL

Se si seleziona **supporto MFC** nella creazione guidata progetto ATL, il progetto dichiara l'applicazione come oggetto applicazione MFC (classe). Il progetto Inizializza la libreria MFC e crea un'istanza di una classe (classe *ProjName*) derivata da [CWinApp](../../mfc/reference/cwinapp-class.md).

Questa opzione è disponibile solo per i progetti DLL ATL non attribuiti.

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

È possibile visualizzare la classe dell'oggetto applicazione e le relative `InitInstance` `ExitInstance` funzioni e in visualizzazione classi.

## <a name="see-also"></a>Vedi anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
