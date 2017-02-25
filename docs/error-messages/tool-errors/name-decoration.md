---
title: "Decorazione dei nomi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nomi decorati, convenzioni di chiamata"
  - "decorazione dei nomi [C++]"
  - "nomi [C++], decorati"
ms.assetid: 8327a27b-bb4f-49f2-8218-b851b9d2a463
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Decorazione dei nomi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La decorazione dei nomi in genere fa riferimento alle convenzioni di denominazione di C\+\+, ma può essere applicata anche a diversi casi di C.  Per impostazione predefinita, C\+\+ usa il nome della funzione, i parametri e il tipo restituito per creare un nome linker per la funzione.  Si consideri la seguente funzione:  
  
```  
void CALLTYPE test(void)  
```  
  
 La seguente tabella mostra il nome linker per diverse convenzioni di chiamata.  
  
|Convenzione di chiamata|File "C" o .c esterno|.cpp, .cxx o \/TP|  
|-----------------------------|---------------------------|-----------------------|  
|Convenzione di denominazione C \(`__cdecl`\)|\_test|?test@@ZAXXZ|  
|Convenzione di denominazione Fastcall \(`__fastcall`\)|@test@0|?test@@YIXXZ|  
|Convenzione di denominazione Chiamata standard \(`__stdcall`\)|\_test@0|?test@@YGXXZ|  
|Convenzione di denominazione Vectorcall \(`__vectorcall`\)|test@@0|?test@@YQXXZ|  
  
 usare "C" esterno per chiamare una funzione C da C\+\+.  "C" esterno forza l'utilizzo della convenzione di denominazione C per le funzioni non classe C\+\+.  Tenere presente le opzioni del compilatore **\/Tc** o **\/Tp** che indicano al compilatore di ignorare l'estensione del nome file e compilare il file come C o C\+\+, rispettivamente.  Queste opzioni possono generare file imprevisti.  
  
 Questo errore può essere causato anche da prototipi di funzione con parametri non corrispondenti.  La decorazione dei nomi incorpora i parametri di una funzione nel nome funzionale decorato finale.  L'errore LNK2001 può essere causato anche dalla chiamata di una funzione con tipi di parametri non corrispondenti a quelli nella dichiarazione di funzione.  
  
 Attualmente non è disponibile alcuno standard per la denominazione C\+\+ tra i fornitori di compilatori o anche tra versioni diverse di un compilatore.  Di conseguenza, se si collegano file oggetto compilati con altri compilatori, lo schema di denominazione prodotto potrebbe non essere lo stesso e causare esterni non risolti.  
  
## Vedere anche  
 [Errore degli strumenti del linker LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md)