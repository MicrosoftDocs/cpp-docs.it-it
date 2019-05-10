---
title: Decorazione dei nomi
ms.date: 04/22/2019
helpviewer_keywords:
- name decoration [C++]
- names [C++], decorated
- decorated names, calling conventions
ms.assetid: 8327a27b-bb4f-49f2-8218-b851b9d2a463
ms.openlocfilehash: d1557f53a07a544ff4f9e5a63f905e6854fb74ce
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857175"
---
# <a name="name-decoration"></a>Decorazione dei nomi

La decorazione dei nomi in genere fa riferimento alle convenzioni di denominazione di C++, ma può essere applicata anche a diversi casi di C. Per impostazione predefinita, C++ usa il nome della funzione, i parametri e il tipo restituito per creare un nome linker per la funzione. Si consideri la dichiarazione di funzione seguente:

`void CALLTYPE test(void);`

La seguente tabella mostra il nome linker per diverse convenzioni di chiamata.

|Convenzione di chiamata|`extern "C"` o `.c` file|`.cpp`, `.cxx` o `/TP`|
|------------------------|---------------------------|------------------------|
|Convenzione di denominazione C (`__cdecl`)|`_test`|`?test@@ZAXXZ`|
|Convenzione di denominazione chiamata veloci (`__fastcall`)|`@test@0`|`?test@@YIXXZ`|
|Convenzione di denominazione di chiamata standard (`__stdcall`)|`_test@0`|`?test@@YGXXZ`|
|Convenzione di denominazione dei vettori (`__vectorcall`)|`test@@0`|`?test@@YQXXZ`|

Uso `extern "C"` per chiamare una funzione C da C++. `extern "C"` forza l'utilizzo della convenzione di denominazione C per non di classe C++ funzioni. Tenere presenti le opzioni del compilatore **/Tc** oppure **/Tp**, che indicano al compilatore di ignorare l'estensione e il file viene compilato come C o C++, rispettivamente. Queste opzioni possono generare nomi del linker che non previsto.

Questo errore può essere causato anche da prototipi di funzione con parametri non corrispondenti. La decorazione dei nomi incorpora i parametri di una funzione nel nome funzionale decorato finale. Chiamata a una funzione con i tipi di parametro che non corrispondono a quelli nella dichiarazione di funzione può anche provocare l'errore LNK2001.

Non esistono attualmente standard per C++ dei nomi tra i fornitori di compilatori o anche tra versioni diverse di un compilatore. Collegano file oggetto compilati da altri compilatori non producano lo stesso schema di denominazione e può causare esterni non risolti.

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md)