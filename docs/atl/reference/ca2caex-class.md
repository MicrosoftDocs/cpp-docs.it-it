---
title: "Classe CA2CAEX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CA2CAEX"
  - "ATL.CA2CAEX<t_nBufferLength>"
  - "ATLCONV/CA2CAEX"
  - "ATL::CA2CAEX<t_nBufferLength>"
  - "ATL::CA2CAEX"
  - "CA2CAEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CA2CAEX (classe)"
ms.assetid: 388e7c1d-a144-474c-a182-b15f69a74bd8
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe CA2CAEX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene utilizzata da macro per la conversione delle stringhe `CA2CTEX` e `CT2CAEX`e dal typedef **CA2CA**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
int t_nBufferLength= 128  
>  
class CA2CAEX  
```  
  
#### Parametri  
 `t_nBufferLength`  
 La dimensione del buffer utilizzato nel processo di conversione.  La lunghezza predefinita è di 128 byte.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::CA2CAEX](../Topic/CA2CAEX::CA2CAEX.md)|Costruttore.|  
|[CA2CAEX::~CA2CAEX](../Topic/CA2CAEX::~CA2CAEX.md)|Il distruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::operator LPCSTR](../Topic/CA2CAEX::operator%20LPCSTR.md)|Operatore di conversione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::m\_psz](../Topic/CA2CAEX::m_psz.md)|Il membro dati di memorizzare la stringa di origine.|  
  
## Note  
 A meno che aggiuntivo la funzionalità sia necessaria, utilizzare `CA2CTEX`, `CT2CAEX`, o **CA2CA** nel codice.  
  
 Questa classe è protetta da utilizzare nei cicli e non supererà lo stack.  Per impostazione predefinita, le classi di conversione ATL e le macro utilizzeranno la tabella codici ANSI del thread corrente per la conversione.  
  
 Le macro seguenti sono basate su questa classe:  
  
-   `CA2CTEX`  
  
-   `CT2CAEX`  
  
 Il typedef seguente è basato sulla classe:  
  
-   **CA2CA**  
  
 Per una descrizione di tali macro di conversione di testo, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Esempio  
 Vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) per un esempio di utilizzo di queste macro per la conversione delle stringhe.  
  
## Requisiti  
 **Header:** atlconv.h  
  
## Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)