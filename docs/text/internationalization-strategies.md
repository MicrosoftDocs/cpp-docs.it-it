---
title: Strategie di internazionalizzazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- globalization [C++], character sets
- language-portable code [C++]
- MBCS [C++], internationalization strategies
- Windows API [C++], international programming strategies
- Win32 [C++], international programming strategies
- Unicode [C++], globalizing applications
- character sets [C++], international programming strategies
- localization [C++], character sets
ms.assetid: b09d9854-0709-4b9a-a00c-b0b8bc4199b1
caps.latest.revision: "8"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6b7ab27bb7a6458efde84451febaeb6f3ef37115
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="internationalization-strategies"></a>Strategie di internazionalizzazione
A seconda dei sistemi operativi di destinazione e mercati, si dispone di diverse strategie di internazionalizzazione:  
  
-   L'applicazione viene utilizzato Unicode e pertanto viene eseguito in Windows 2000 e Windows NT, ma non in Windows 95 o Windows 98.  
  
     Utilizzare le funzionalità specifiche di Unicode e tutti i caratteri sono 16 bit (sebbene sia possibile utilizzare caratteri ANSI in alcune parti del programma per scopi speciali). La libreria di run-time C fornisce tipi di dati, macro e funzioni per la programmazione solo Unicode. MFC è completamente abilitata per Unicode.  
  
-   L'applicazione utilizza il formato MBCS e può essere eseguito su qualsiasi piattaforma Win32.  
  
     Utilizzare le funzionalità specifiche di MBCS. Le stringhe possono contenere caratteri a byte singolo, caratteri DBCS o entrambi. La libreria di run-time C fornisce tipi di dati, macro e funzioni per la programmazione MBCS-only. MFC è completamente abilitata MBCS.  
  
-   Viene scritto il codice sorgente per l'applicazione completa portabilità, tramite la ricompilazione con il simbolo **Unicode** o il simbolo **MBCS** definito, è possibile creare versioni che usano uno. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   L'applicazione utilizza una libreria di wrapper per le funzioni di Unicode in Windows 95, Windows 98 e Windows ME mancanti come quello descritto [progettare una singola App Unicode che viene eseguito su Both Windows 98 e Windows 2000](http://go.microsoft.com/fwlink/p/?LinkId=250770). Le librerie di wrapper sono anche disponibili in commercio.  
  
     Utilizzare completamente portabili C in fase di esecuzione funzioni, macro e tipi di dati. Flessibilità di MFC supporta tutte queste strategie.  
  
 Il resto degli argomenti seguenti concentrarsi sulla scrittura di codice completamente portabile che è possibile compilare come Unicode o MBCS.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md)