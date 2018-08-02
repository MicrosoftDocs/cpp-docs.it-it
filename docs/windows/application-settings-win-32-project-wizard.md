---
title: Le impostazioni dell'applicazione, creazione guidata progetto Win32 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.appwiz.win32.appset
dev_langs:
- C++
helpviewer_keywords:
- application settings [C++]
- Win32 Project Wizard, application settings
ms.assetid: d6b818f0-9b23-4793-a6c5-df1c8c594bad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d6d2cd31306baaa0d9c8f137122fed1d4ae97295
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464691"
---
# <a name="application-settings-win-32-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto Win32
Utilizzare questa pagina della procedura guidata per impostare le opzioni per il progetto Win32.  
  
 **Tipo di applicazione**  
 Crea il tipo di applicazione specificata.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Applicazione console**|Crea un'applicazione console. Programmi console sviluppati con [funzioni Console](https://msdn.microsoft.com/library/ms813137.aspx), che forniscono il supporto di modalità carattere nelle finestre della console. Visual C++ [librerie run-time](../c-runtime-library/c-run-time-library-reference.md) anche fornire l'output e input da finestre della console con funzioni dei / o standard, ad esempio `printf_s()` e `scanf_s()`. Un'applicazione console non dispone di alcuna interfaccia utente grafica. Compila in un file .exe e può essere eseguito come applicazione autonoma dalla riga di comando.<br /><br /> È possibile aggiungere il supporto MFC e ATL a un'applicazione console.|  
|**Applicazione di Windows**|Crea un programma Win32. Un programma Win32 è un'applicazione eseguibile (EXE) scritta in C o C++, tramite chiamate all'API Win32 per creare un'interfaccia utente grafica.<br /><br /> Non è possibile aggiungere MFC o ATL supportano a un'applicazione Windows.|  
|**DLL**|Crea una libreria di collegamento dinamico Win32 (DLL). Una DLL Win32 è un file binario, scritto in C o C++, che usa le chiamate all'API Win32 anziché le classi MFC e che funge da una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni.<br /><br /> Non è possibile aggiungere MFC o ATL supportano a un'applicazione DLL. È possibile indicare che la DLL Esporta simboli.|  
|**Libreria statica**|Crea una libreria statica. Una libreria statica è un file contenente gli oggetti e le funzioni e i dati che si collega il programma quando viene compilato il file eseguibile. In questo argomento illustra come creare i file di avvio e [proprietà del progetto](../ide/property-pages-visual-cpp.md) per una libreria statica. Un file di libreria statica offre i vantaggi seguenti:<br /><br /> -Una libreria statica Win32 è utile se l'applicazione che si sta lavorando effettua le chiamate all'API Win32 anziché le classi MFC.<br />-Il processo di collegamento non cambiano se il resto dell'applicazione Windows viene scritto nel linguaggio C o C++.<br />-È possibile collegare una libreria statica a un programma basato su MFC o a un programma non MFC.|  
  
 **Opzioni aggiuntive**  
 Definisce il supporto e le opzioni per l'applicazione, a seconda del tipo.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Progetto vuoto**|Specifica che i file di progetto sono vuoti. Se si dispone di un set di file del codice sorgente (ad esempio file con estensione cpp, i file di intestazione, icone, barre degli strumenti, finestre di dialogo e così via) e si desidera creare un progetto nell'ambiente di sviluppo di Visual C++, è innanzitutto necessario creare un progetto vuoto, quindi aggiungere i file al progetto.<br /><br /> Questa selezione non è disponibile per i progetti di libreria statica.|  
|**Simboli di esportazione**|Specifica che il progetto della DLL Esporta simboli.|  
|**Intestazione precompilata**|Specifica che il progetto di libreria statica Usa un'intestazione precompilata.|  
|Controlli Security Development Lifecycle (SDL)|Per altre informazioni su SDL, vedere [materiale sussidiario del processo Microsoft Security Development Lifecycle (SDL)](../build/reference/sdl-enable-additional-security-checks.md)|  
  
 **Aggiungere il supporto per**  
 Aggiungere il supporto per una delle librerie fornite con Visual C++.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ATL**|Compila nel progetto il supporto per le classi nella libreria ATL (Active Template). Per le applicazioni console Win32 solo.<br /><br /> **Nota** questa opzione non indica il supporto per l'aggiunta di procedure guidate di codice gli oggetti ATL usando la libreria ATL. È possibile aggiungere oggetti ATL solo per i progetti ATL o MFC nei progetti con ATL è supportato.|  
|**MFC**|Compila nel progetto il supporto per la libreria di classi MFC (Microsoft Foundation). Per le applicazioni console Win32 e solo le librerie statiche.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione Win32](../windows/win32-application-wizard.md)   