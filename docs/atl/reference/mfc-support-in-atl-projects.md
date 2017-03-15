---
title: "Supporto di MFC in progetti ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.atl.addmfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), MFC support"
ms.assetid: f90b4276-cb98-4c11-902c-9ebcfe6f954b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Supporto di MFC in progetti ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se si seleziona **Supporto MFC** nella Creazione guidata progetto ATL, il progetto dichiara l'applicazione come oggetto applicazione \(classe\) MFC.  Il progetto inizializza la libreria MFC e crea l'istanza di una classe \(classe *ProjName*\) derivata da [CWinApp](../../mfc/reference/cwinapp-class.md).  
  
 Questa opzione è disponibile soltanto per i progetti DLL ATL senza attributi.  
  
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
  
 È possibile visualizzare la classe dell'oggetto applicazione e le relative funzioni `InitInstance` ed `ExitInstance` in Visualizzazione classi.  
  
## Vedere anche  
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)