---
title: Supporto MFC in ATL (progetti) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.addmfc
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, MFC support
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d42afec863695b1cab05c2d3cf2f65f3d64a1507
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360641"
---
# <a name="mfc-support-in-atl-projects"></a>Supporto MFC in ATL (progetti)
Se si seleziona **supporto MFC** nella creazione guidata progetto ATL, il progetto dichiara l'applicazione come un oggetto applicazione MFC (classe). Il progetto inizializza la libreria MFC e crea un'istanza di una classe (classe *ProjName*) che deriva da [CWinApp](../../mfc/reference/cwinapp-class.md).  
  
 Questa opzione è disponibile per solo progetti DLL ATL senza attributi.  
  
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
  
 È possibile visualizzare la classe dell'oggetto applicazione e il relativo `InitInstance` e `ExitInstance` le funzioni nella classe visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

