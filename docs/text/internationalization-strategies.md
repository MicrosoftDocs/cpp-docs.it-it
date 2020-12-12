---
description: 'Altre informazioni su: strategie di internazionalizzazione'
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
ms.openlocfilehash: 51570a3e340a8af0a9f16f8212aa11f6bf3119b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331181"
---
# <a name="internationalization-strategies"></a>Strategie di internazionalizzazione

In base ai sistemi operativi e ai mercati di destinazione, sono disponibili diverse strategie di internazionalizzazione:

- L'applicazione usa Unicode.

   Si utilizzano funzionalità specifiche di Unicode e tutti i caratteri sono a 16 bit (sebbene sia possibile utilizzare caratteri ANSI in alcune parti del programma per scopi speciali). La libreria di runtime C fornisce funzioni, macro e tipi di dati per la programmazione solo Unicode. MFC è completamente abilitato per Unicode.

- L'applicazione utilizza MBCS e può essere eseguita su qualsiasi piattaforma Win32.

   Si utilizzano funzionalità specifiche di MBCS. Le stringhe possono contenere caratteri a byte singolo, caratteri a byte doppio o entrambi. La libreria di runtime C fornisce funzioni, macro e tipi di dati per la programmazione solo MBCS. MFC è completamente abilitato per MBCS.

- Il codice sorgente per l'applicazione è scritto per la portabilità completa, ricompilando con il simbolo `_UNICODE` o il simbolo `_MBCS` definito, è possibile produrre versioni che usano. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

   È possibile utilizzare le funzioni di runtime, le macro e i tipi di dati completamente portabili del linguaggio C. La flessibilità di MFC supporta le strategie seguenti.

Il resto di questi argomenti è incentrato sulla scrittura di codice completamente portabile che è possibile compilare come Unicode o MBCS.

## <a name="see-also"></a>Vedi anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md)
