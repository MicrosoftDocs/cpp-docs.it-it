---
title: "Procedura: Ottenere un servizio da un thread in background (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "multithreading, servizi"
ms.assetid: 97a56709-66d4-431a-ae63-392ee5898511
caps.latest.revision: 8
caps.handback.revision: 8
manager: "douge"
---
# Procedura: Ottenere un servizio da un thread in background (C++)
I servizi non possono essere ottenuti tramite `IServiceProvider.QueryService` da un thread in background.  Se si utilizza `QueryService` per ottenere un servizio nel thread principale e quindi si tenta di utilizzare il servizio su un thread in background, temporanei.  
  
 Per ottenere un servizio da un thread in background, utilizzare `CoMarshalInterThreadInterfaceInStream` nel metodo di `IVsPackage.SetSite` effettuare il marshalling del provider di servizi in un flusso nel thread principale.  Quindi è possibile unmarshal il provider di servizi su un thread in background e utilizzarlo per ottenere il servizio.  Operazione solo una volta unmarshal, in modo da memorizzare nella cache l'interfaccia che si ottiene nuovamente.  
  
> [!NOTE]
>  Il codice gestito effettua automaticamente il marshalling delle interfacce tra i thread, in modo da ottenere un servizio da un thread in background non richiede codice speciale.  
  
## Esempio  
 Il codice riportato di seguito effettua il marshalling di un provider di servizi nel thread principale e un metodo di `QueryServiceFromBackgroundThread` a unmarshal il provider di servizi per ottenere un servizio da un thread in background.  
  
```  
class CMyPackage : public IVsPackage  
{  
private:  
    // Used to marshal IServiceProvider between threads  
    CComPtr< IStream > m_pSPStream;  
    // IServiceProvider proxy for the background thread  
    CComPtr< IServiceProvider > m_pBackgroundSP;  
  
public:  
    HRESULT SetSite( IServiceProvider* pSP )  
    {  
        // Marshal the service provider into a stream so that  
        // the background thread can retrieve it later  
        CoMarshalInterThreadInterfaceInStream(  
            IID_IServiceProvider, pSP, &m_pSPStream);  
  
        //... do the rest of your initialization  
    }  
  
    // Call this when your background thread needs to call QueryService  
    // The first time through, it unmarshals the interface stored   
    HRESULT QueryServiceFromBackgroundThread(  
        REFGUID rsid,        // [in] Service ID  
        REFIID riid,         // [in] Interface ID  
        // [out] Interface pointer of requested service (NULL on error)  
        void **ppvObj  
    {  
        if( !m_pBackgroundSP )  
        {  
            if( !m_pSPStream )  
            {  
                return E_UNEXPECTED;  
            }  
  
            HRESULT hr = CoGetInterfaceAndReleaseStream(   
                m_pSPStream, IID_IServiceProvider,   
                (void **)&m_pBackgroundSP );  
            if( FAILED(hr) )  
            {  
                return hr;  
            }  
  
            // The CoGetInterfaceAndReleaseStream has already   
            // destroyed the stream.  To avoid double-freeing,   
            // the smart wrapper needs to be detached.  
            m_pSPStream.Detach();  
        }  
  
        return m_pBackgroundSP->QueryService( rsid, riid, ppvObj );  
    }  
};  
```  
  
## Vedere anche  
 [Utilizzo e servizi](../Topic/Using%20and%20Providing%20Services.md)   
 [Funzionalità fondamentali del servizio](../Topic/Service%20Essentials.md)