---
title: "nullptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "nullptr_cpp"
  - "nullptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nullptr (parola chiave) [C++]"
ms.assetid: e9d80ea6-2506-4eb5-b47b-2349df085832
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# nullptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce una costante del puntatore null di tipo `std::nullptr_t`, che è convertibile in qualsiasi tipo di puntatore raw.  Sebbene sia possibile utilizzare la parola chiave `nullptr` senza includere alcuna intestazione, se il codice utilizza il tipo `std::nullptr_t`, è necessario definirlo includendo l'intestazione `<cstddef>`.  
  
> [!NOTE]
>  La parola chiave `nullptr` viene definita in C\+\+\/CLI per le applicazioni di codice gestito e non è intercambiabile con la parola chiave nello standard ISO C\+\+.  Se il codice può essere compilato utilizzando l'opzione del compilatore [\/clr](../build/reference/clr-common-language-runtime-compilation.md), che ha come obiettivo il codice gestito, utilizzare `__nullptr` in qualsiasi riga di codice in cui è necessario accertarsi che il compilatore utilizzi l'interpretazione in C\+\+ nativo.  Per ulteriori informazioni, vedere [nullptr](../windows/nullptr-cpp-component-extensions.md).  
  
## Note  
 Evitare l'utilizzo di `NULL` o zero \(`0`\) come costante del puntatore null; `nullptr` è meno vulnerabile a un utilizzo improprio e funziona meglio nella maggior parte delle situazioni.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro NULL si espande in `0`, in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>`, che non è convertibile al tipo di parametro di func \(\) `std::pair<const char *, double>`.  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [nullptr](../windows/nullptr-cpp-component-extensions.md)