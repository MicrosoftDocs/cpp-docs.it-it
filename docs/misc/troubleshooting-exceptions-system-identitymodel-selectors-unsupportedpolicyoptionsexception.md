---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.UnsupportedPolicyOptionsException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.IdentityModel.Selectors.UnsupportedPolicyOptionsException (eccezione)"
  - "UnsupportedPolicyOptionsException (eccezione)"
ms.assetid: 1151127d-81a1-4d87-8462-924ab9d1ee01
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.UnsupportedPolicyOptionsException
Un'eccezione <xref:System.IdentityModel.Selectors.UnsupportedPolicyOptionsException> indica che al sistema sono stati forniti criteri che includono opzioni non supportate. Le restrizioni che possono causare questi errori sono le seguenti:  
  
 Un destinatario ha richiesto un token dal servizio token di sicurezza locale specificando http:\/\/schemas.xmlsoap.org\/ws\/2005\/05\/identity\/issuer\/self come autorità emittente del token. Tuttavia, uno dei requisiti specificati nei criteri non è supportato dal servizio token di sicurezza locale CardSpace. Per altre informazioni, vedere il [riferimento tecnico per Information Card Profile V1.0](http://go.microsoft.com/fwlink/?LinkId=102401). Esempi di opzioni non supportate sono i seguenti:  
  
-   Un'attestazione richiesta dal destinatario non è inclusa nell'elenco delle attestazioni supportate specificate nella sezione relativa ai [tipi di attestazione supportati](http://go.microsoft.com/fwlink/?LinkId=102402) del riferimento tecnico per Information Card Profile V1.0.  
  
-   Il tipo di token è diverso da SAML 1.0 o 1.1.  
  
-   Per i siti non\-SSL, una chiave non è simmetrica.  
  
-   KeyWrapAlgorithm differisce dall'algoritmo predefinito.  
  
-   Nei criteri è specificato un elemento non supportato. Gli elementi supportati sono i seguenti:  
  
    -   EncryptionAlgorithm  
  
    -   CanonicalizationAlgorithm  
  
    -   SignWith  
  
    -   TokenType  
  
    -   ClaimsElement  
  
    -   KeyType  
  
    -   KeySize  
  
    -   EncryptWith  
  
    -   RequestType  
  
    -   SecondaryParameters  
  
    -   KeyWrapAlgorithm  
  
-   wst:RequestType non è di tipo Issue.  
  
-   Per i tipi di chiave asimmetrici, la dimensione della chiave non è 2048.  
  
## Vedere anche  
 <xref:System.IdentityModel.Selectors.UnsupportedPolicyOptionsException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)