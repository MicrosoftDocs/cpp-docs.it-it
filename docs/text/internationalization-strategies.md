---
title: Strategie di internazionalizzazione
ms.date: 11/04/2016
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
ms.openlocfilehash: 615ad42d5a1e4cb6076877e1d1b5de4bd11fdf83
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50501322"
---
# <a name="internationalization-strategies"></a>Strategie di internazionalizzazione

In base ai sistemi operativi di destinazione e mercati, sono disponibili diverse strategie di internazionalizzazione:

- L'applicazione Usa Unicode.

   Si usano funzionalità specifiche di Unicode e tutti i caratteri sono con ampiezza 16 bit (sebbene sia possibile utilizzare caratteri ANSI in alcune parti del programma per scopi speciali). La libreria di runtime C fornisce tipi di funzioni, macro e i dati per la programmazione solo Unicode. MFC è completamente abilitata per Unicode.

- L'applicazione usa il formato MBCS e può essere eseguito su qualsiasi piattaforma Win32.

   Utilizzare funzionalità specifiche di MBCS. Le stringhe possono contenere caratteri a byte singolo, caratteri DBCS o entrambi. La libreria di runtime C fornisce tipi di funzioni, macro e i dati per la programmazione MBCS-only. MFC supporta completamente MBCS.

- Il codice sorgente per l'applicazione viene scritto per la portabilità completa, ovvero tramite la ricompilazione con il simbolo `_UNICODE` o il simbolo `_MBCS` definito, è possibile creare versioni di cui viene usato uno. Per altre informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).

   Si usano completamente portabili C run-time funzioni, macro e tipi di dati. Flessibilità di MFC supporta uno qualsiasi di queste strategie.

Il resto degli argomenti seguenti concentrarsi sulla scrittura di codice completamente portabile che è possibile compilare MBCS o Unicode.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md)