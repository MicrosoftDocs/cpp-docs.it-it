---
title: Creazione guidata progetto Win32 di impostazioni applicazione, | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.appwiz.win32.appset
dev_langs: C++
helpviewer_keywords:
- application settings [C++]
- Win32 Project Wizard, application settings
ms.assetid: d6b818f0-9b23-4793-a6c5-df1c8c594bad
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7f93e81d5d030112f436ad93a53c2a65854b38f7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="application-settings-win-32-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto Win32
Utilizzare questa pagina della procedura guidata per impostare le opzioni per il progetto Win32.  
  
 **Tipo di applicazione**  
 Crea il tipo di applicazione specificata.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Applicazione console**|Crea un'applicazione console. Programmi console vengono sviluppati con [funzioni Console](https://msdn.microsoft.com/en-us/library/ms813137.aspx), che forniscono il supporto di modalità carattere nelle finestre della console. Visual C++ [librerie di runtime](../c-runtime-library/c-run-time-library-reference.md) anche fornire output e input dalle finestre di console con funzioni dei / o standard, ad esempio **printf_s ()** e **scanf_s ()**. Un'applicazione console non ha alcuna interfaccia utente grafica. Questa venga compilata in un file .exe e può essere eseguita come applicazione autonoma dalla riga di comando.<br /><br /> È possibile aggiungere il supporto MFC e ATL a un'applicazione console.|  
|**Applicazione Windows**|Crea un programma Win32. Un programma Win32 è un'applicazione eseguibile (EXE) scritta in C o C++, l'utilizzo di chiamate all'API Win32 per creare un'interfaccia utente grafica.<br /><br /> Non è possibile aggiungere MFC o ATL supporta per un'applicazione Windows.|  
|**DLL**|Crea una libreria di collegamento dinamico (DLL) di Win32. Una DLL Win32 è un file binario, scritto in C o C++, che vengono utilizzate le chiamate all'API Win32 anziché alle classi MFC e che funge da una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni.<br /><br /> Non è possibile aggiungere MFC o ATL supporta per un'applicazione DLL. È possibile indicare che la DLL Esporta simboli.|  
|**Libreria statica**|Crea una libreria statica. Una libreria statica è un file che contiene gli oggetti e le funzioni e i dati che si collega il programma quando viene generato il file eseguibile. In questo argomento viene illustrato come creare i file di avvio e [le proprietà del progetto](../ide/property-pages-visual-cpp.md) per una libreria statica. Un file di libreria statica offre i vantaggi seguenti:<br /><br /> -Una libreria statica Win32 è utile se l'applicazione che si sta lavorando effettua le chiamate all'API Win32 anziché alle classi MFC.<br />-Il processo di collegamento è lo stesso, se il resto dell'applicazione Windows viene scritto nel linguaggio C o C++.<br />-È possibile collegare una libreria statica a un programma basato su MFC o a un programma non MFC.|  
  
 **Opzioni aggiuntive**  
 Definisce le opzioni per l'applicazione, a seconda del tipo e il supporto tecnico.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Progetto vuoto**|Specifica che i file di progetto sono vuoti. Se si dispone di un set di file del codice sorgente (ad esempio file con estensione cpp, file di intestazione, icone, barre degli strumenti, finestre di dialogo e così via) e si desidera creare un progetto nell'ambiente di sviluppo di Visual C++, è innanzitutto necessario creare un progetto vuoto, quindi aggiungere i file al progetto.<br /><br /> Questa selezione non è disponibile per i progetti di libreria statica.|  
|**Simboli di esportazione**|Specifica che il progetto di DLL Esporta simboli.|  
|**Intestazione precompilata**|Specifica che il progetto di libreria statica utilizza un'intestazione precompilata.|  
|Controlli Security Development Lifecycle (SDL)|Per ulteriori informazioni su SDL, vedere [materiale sussidiario del processo Microsoft Security Development Lifecycle (SDL)](../build/reference/sdl-enable-additional-security-checks.md)|  
  
 **Aggiungere il supporto per**  
 Aggiungere il supporto per una delle librerie fornite con Visual C++.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ATL**|Compila nel progetto il supporto per le classi nella libreria ATL (Active Template). Per le applicazioni console Win32 solo.<br /><br /> **Nota** questa opzione non indica il supporto per l'aggiunta di oggetti ATL mediante la libreria ATL procedure guidate di codice. È possibile aggiungere oggetti ATL solo ai progetti ATL o MFC progetti con ATL supportano.|  
|**MFC**|Compila nel progetto il supporto per la libreria di classe MFC (Microsoft Foundation). Per le applicazioni console Win32 e solo le librerie statiche.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione Win32](../windows/win32-application-wizard.md)   
