---
title: Supporto MFC in ATL (progetti) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: vc.atl.addmfc
dev_langs: C++
helpviewer_keywords: ATL projects, MFC support
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0217c62ff207ad706dbcb1cd172e878c2b96daee
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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

