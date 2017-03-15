---
title: "__getmainargs, __wgetmainargs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__wgetmainargs"
  - "__getmainargs"
apilocation: 
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__wgetmainargs"
  - "__getmainargs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__wgetmainargs"
  - "__getmainargs"
ms.assetid: f72f54eb-9509-4bdf-8752-40fc49055439
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# __getmainargs, __wgetmainargs
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama la linea di comando e copia gli argomenti nel `main()` tramite i puntatori passati.  
  
## Sintassi  
  
```cpp  
int __getmainargs(  
    int * _Argc,   
   char *** _Argv,   
   char *** _Env,   
   int _DoWildCard,  
_startupinfo * _StartInfo);  
  
 int __wgetmainargs (  
   int *_Argc,  
   wchar_t ***_Argv,  
   wchar_t ***_Env,  
   int _DoWildCard,  
   _startupinfo * _StartInfo)  
  
```  
  
#### Parametri  
 `_Argc`  
 Un integer contenente il numero di argomenti che seguono in `argv`.  Il parametro `argc` è sempre maggiore di o uguale a 1.  
  
 `_Argv`  
 Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma.  Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato, argv\[1\] è il primo argomento della riga di comando e così via fino a argv\[argc\], che è sempre NULL.  Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc – 1]`.  
  
 `_Env`  
 Una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente.  Questa matrice viene terminata da una voce NULL.  
  
 `_DoWildCard`  
 Un integer che se impostato a 1 espande i caratteri jolly in argomenti della riga di comando, se impostato a 0 non esegue alcuna operazione.  
  
 `_StartInfo`  
 Altre informazioni da passare alla DLL CRT.  
  
## Valore restituito  
 0 se ha esito positivo; un valore negativo in caso di insuccesso.  
  
## Note  
 Utilizzare `__getmainargs` sulle piattaforme non di tipo wide, e `__wgetmainargs` sulle piattaforme a caratteri wide \(Unicode\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_getmainargs|internal.h|  
|\_\_wgetmainargs|internal.h|