---
title: Strategie di internazionalizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 20e4d7b067daedcbc5ce065c096e561dbf932ac1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33856596"
---
# <a name="internationalization-strategies"></a>Strategie di internazionalizzazione
A seconda dei sistemi operativi di destinazione e mercati, si dispone di diverse strategie di internazionalizzazione:  
  
-   L'applicazione utilizza Unicode.  
  
     Utilizzare le funzionalità specifiche di Unicode e tutti i caratteri sono 16 bit (sebbene sia possibile utilizzare caratteri ANSI in alcune parti del programma per scopi speciali). La libreria di run-time C fornisce tipi di dati, macro e funzioni per la programmazione solo Unicode. MFC è completamente abilitata per Unicode.  
  
-   L'applicazione utilizza il formato MBCS e può essere eseguito su qualsiasi piattaforma Win32.  
  
     Utilizzare le funzionalità specifiche di MBCS. Le stringhe possono contenere caratteri a byte singolo, caratteri DBCS o entrambi. La libreria di run-time C fornisce tipi di dati, macro e funzioni per la programmazione MBCS-only. MFC è completamente abilitata MBCS.  
  
-   Viene scritto il codice sorgente per l'applicazione completa portabilità, tramite la ricompilazione con il simbolo **Unicode** o il simbolo **MBCS** definito, è possibile creare versioni che usano uno. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
     Utilizzare completamente portabili C in fase di esecuzione funzioni, macro e tipi di dati. Flessibilità di MFC supporta tutte queste strategie.  
  
 Il resto degli argomenti seguenti concentrarsi sulla scrittura di codice completamente portabile che è possibile compilare come Unicode o MBCS.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md)